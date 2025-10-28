![Language](https://img.shields.io/badge/Language-C-blue.svg)
![OS](https://img.shields.io/badge/OS-Fedora%20Linux-purple.svg)
![Last Commit](https://img.shields.io/github/last-commit/Pugazhendhi231701042/CS23431---Operating-Systems)
![Stars](https://img.shields.io/github/stars/Pugazhendhi231701042/CS23431---Operating-Systems?style=social)

# Experiment 01 – Basic Linux Commands

## Aim
To practice and understand fundamental Linux commands in Fedora Linux.

---

## Table of Contents
1. [General Commands](#general-commands)
2. [File & Directory Commands](#file--directory-commands)
3. [Steps](#steps)
4. [Compilation / Execution](#compilation--execution)
5. [Sample Output](#sample-output)

---

## General Commands

| Command       | Function |
|---------------|---------|
| date          | Display current date and time |
| date +%D      | Display only date |
| date +%T      | Display only time |
| date +%Y      | Display year |
| date +%H      | Display hour |
| cal           | Calendar of current month |
| calyear       | Calendar of all months of specified year |
| calmonth year | Calendar of specified month of year |
| who           | Login details of all users |
| who am i      | Login details of current user |
| tty           | Terminal name |
| uname         | Operating System info |
| uname -r      | OS version (kernel) |
| uname -n      | Domain name of server |
| echo "txt"    | Displays given text |
| echo $HOME    | Displays user home directory |
| bc            | Basic calculator |
| lpfile        | Spool a print job |
| man cmdname   | Manual for command |

---

## File & Directory Commands

| Command           | Function |
|------------------|---------|
| cat >filename     | Create file with content; end typing Ctrl+D |
| cat filename      | Display file content |
| cat >>filename    | Append content to file |
| cp src des        | Copy files to destination (overwrite if exists) |
| cp -i src des     | Copy files with overwrite warning |
| cp -r src des     | Copy entire directory recursively |
| mv f1 f2 f3 dir   | Move multiple files to directory |
| mv -v old new     | Rename file/folder and show moved names |
| rm file           | Delete file(s) (-i option for warning) |
| rm *              | Delete all files in current directory |
| rm -r             | Delete files + subdirectories |
| rm -f             | Force remove write-protected files |
| ls *              | List all files/subdirectories |
| ls name           | Check if file/directory exists |
| ls name*          | List files matching pattern |
| ls -a             | List all files including hidden |
| ls -x dirname     | Specific listing of directory |
| ls -R             | Recursive listing of all files/subdirectories |
| pwd               | Show current working directory |
| mkdir dir         | Create directory |
| cd subdir         | Change directory |
| cd                | Switch to home directory |
| cd /              | Switch to root directory |
| cd ..             | Move to parent directory |
| rmdir subdir      | Remove empty directory |

---

## Steps
1. Open terminal on Fedora Linux.
2. Practice each command listed above.
3. Observe outputs and note errors or important points.
4. Take screenshots for future reference (optional).

---

## Compilation / Execution
No compilation needed for shell commands. Execute directly in terminal.

For sample C program:
```bash
gcc program.c -o program
./program
