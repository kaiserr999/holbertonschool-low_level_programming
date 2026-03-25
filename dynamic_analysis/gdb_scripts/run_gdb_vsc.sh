#!/usr/bin/env bash
set -euo pipefail

# Usage: run_gdb_vsc.sh <sample.c> <input-file>
SRC=${1:-../sample.c}
INPUT=${2:-../input.txt}

# Auto-detect markers
TGT_PRE_LINE=$(grep -n "TGT_PRE_POINT\|TGT_PRE" "$SRC" 2>/dev/null | cut -d: -f1 || true)
TGT_POST_LINE=$(grep -n "TGT_POST_POINT\|TGT_POST" "$SRC" 2>/dev/null | cut -d: -f1 || true)
MASK_LINE=$(grep -n "MASK_POINT\|MASK" "$SRC" 2>/dev/null | cut -d: -f1 || true)
SIG_LINE=$(grep -n "SIG_POINT\|SIG" "$SRC" 2>/dev/null | cut -d: -f1 || true)

if [ -z "$TGT_PRE_LINE" ] || [ -z "$TGT_POST_LINE" ] || [ -z "$MASK_LINE" ] || [ -z "$SIG_LINE" ]; then
    echo "Could not auto-detect one or more marker lines in $SRC. Edit this script to set TGT_PRE_LINE, TGT_POST_LINE, MASK_LINE, SIG_LINE." >&2
    exit 1
fi

gdb -q --batch \
    -ex "file $SRC" \
    -ex "break $SRC:$TGT_PRE_LINE" \
    -ex "break $SRC:$TGT_POST_LINE" \
    -ex "break $SRC:$MASK_LINE" \
    -ex "break $SRC:$SIG_LINE" \
    -ex "run < $INPUT" \
    -ex "printf \"TGT_PRE=0x%08X\\n\", (unsigned int) tgt" \
    -ex "continue" \
    -ex "printf \"TGT_POST=0x%08X\\n\", (unsigned int) tgt" \
    -ex "continue" \
    -ex "printf \"MASK=0x%04X\\n\", (unsigned short) mask" \
    -ex "printf \"SIG=0x%04X\\n\", (unsigned short) sig"
