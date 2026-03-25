#!/usr/bin/env bash
set -euo pipefail

# Usage: run_gdb_fundamentals.sh <sample.c> <input-file>
SRC=${1:-../sample.c}
INPUT=${2:-../input.txt}

# Try to find marker lines; fall back to user-editable defaults
TAG_LINE=$(grep -n "TAG_POINT" "$SRC" 2>/dev/null | cut -d: -f1 || true)
RETURN_LINE=$(grep -n "RETURN_POINT" "$SRC" 2>/dev/null | cut -d: -f1 || true)
ACC_I0_LINE=$(grep -n "ACC_I0_POINT" "$SRC" 2>/dev/null | cut -d: -f1 || true)

if [ -z "$TAG_LINE" ] || [ -z "$RETURN_LINE" ] || [ -z "$ACC_I0_LINE" ]; then
    echo "Could not auto-detect marker lines in $SRC. Edit this script to set TAG_LINE, RETURN_LINE, ACC_I0_LINE." >&2
    echo "Searched for: TAG_POINT, RETURN_POINT, ACC_I0_POINT" >&2
    exit 1
fi

gdb -q --batch \
    -ex "file $SRC" \
    -ex "break $SRC:$TAG_LINE" \
    -ex "break $SRC:$RETURN_LINE" \
    -ex "break $SRC:$ACC_I0_LINE" \
    -ex "run < $INPUT" \
    -ex "printf \"TAG_ACC=0x%08X\\n\", (unsigned int) x" \
    -ex "continue" \
    -ex "printf \"KEY=0x%08X\\n\", (unsigned int) x" \
    -ex "continue" \
    -ex "printf \"ACC_AFTER_I0=0x%08X\\n\", (unsigned int) acc"
