GDB helper scripts and VS Code instructions

Purpose
- These scripts and templates help you run GDB (or VS Code) locally to extract the debugger-only values required by the assignment.

Install GDB (Debian/Ubuntu):

```bash
sudo apt-get update
sudo apt-get install -y gdb
```

How to use the automated scripts
- Place the real `sample.c` in `dynamic_analysis/` (or pass its path to the script).
- The scripts search for marker comments in the source to set breakpoints. If your `sample.c` does not include the exact markers, edit the script variables to set the correct line numbers.

Run the fundamentals script (generates TAG_ACC, KEY, ACC_AFTER_I0):

```bash
cd dynamic_analysis/gdb_scripts
./run_gdb_fundamentals.sh ../sample.c ../input.txt
```

Run the VS Code script (generates TGT_PRE/TGT_POST/MASK/SIG):

```bash
cd dynamic_analysis/gdb_scripts
./run_gdb_vsc.sh ../sample.c ../input.txt
```

If the scripts cannot auto-detect marker lines, open the scripts and set the variables `TAG_LINE`, `RETURN_LINE`, `ACC_I0_LINE`, `TGT_PRE_LINE`, `TGT_POST_LINE`, `MASK_LINE`, `SIG_LINE` to the correct line numbers in your `sample.c` (use `nl -ba sample.c | sed -n '1,200p'` to view numbered lines).

VS Code
- There's a launch template `dynamic_analysis/.vscode/launch.json.template` in this repo. Copy it to `.vscode/launch.json` and edit `program` and breakpoint `line` numbers to match your `sample.c`. Then use the Debug panel to run and inspect variables.
