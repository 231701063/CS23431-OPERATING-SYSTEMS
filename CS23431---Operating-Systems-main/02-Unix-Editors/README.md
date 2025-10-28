![Language](https://img.shields.io/badge/Language-C-blue.svg)
![OS](https://img.shields.io/badge/OS-Fedora%20Linux-purple.svg)
![Last Commit](https://img.shields.io/github/last-commit/Pugazhendhi231701042/CS23431---Operating-Systems)
![Stars](https://img.shields.io/github/stars/Pugazhendhi231701042/CS23431---Operating-Systems?style=social)

# Experiment 02 – Unix Editors (sed, vi, emacs)

## Aim
To learn and practice basic Unix text editors (sed, vi, emacs) for editing, searching, and manipulating text files.

---

## Table of Contents
1. [Editors](#editors)
2. [Common Commands](#common-commands)
3. [Steps](#steps)
4. [Compilation / Execution](#compilation--execution)
5. [Sample Output](#sample-output)

---

## Editors

| Editor | Description |
|--------|------------|
| vi     | Visual text editor in terminal |
| vim    | Improved version of vi |
| emacs  | Powerful text editor with GUI/terminal modes |
| sed    | Stream editor for searching, find & replace, and text transformations |

---

## Common Commands

| Command | Function |
|---------|---------|
| vi filename | Open file in vi editor |
| i         | Insert mode in vi |
| Esc + :wq | Save and exit vi |
| Esc + :q! | Exit without saving vi |
| emacs filename | Open file in emacs editor |
| Ctrl + x Ctrl + s | Save file in emacs |
| sed 's/old/new/' file | Replace 'old' with 'new' in file |
| sed -i 's/old/new/g' file | Replace globally in file |

---

## Steps
1. Open terminal in Fedora Linux.
2. Open or create a text file using vi or emacs.
3. Practice basic editing, saving, and exiting commands.
4. Try searching and replacing text using `sed`.
5. Observe outputs and errors.

---

## Compilation / Execution
No compilation needed for text editors. Commands are run directly in terminal.

For C demo program (optional):
```bash
gcc program.c -o program
./program
