![Language](https://img.shields.io/badge/Language-C-blue.svg)
![OS](https://img.shields.io/badge/OS-Fedora%20Linux-purple.svg)
![Last Commit](https://img.shields.io/github/last-commit/Pugazhendhi231701042/CS23431---Operating-Systems)
![Stars](https://img.shields.io/github/stars/Pugazhendhi231701042/CS23431---Operating-Systems?style=social)

# Experiment 05 – System Calls

## Aim
To understand and implement basic Linux system calls: fork(), exec(), getpid(), opendir(), and readdir().

---

## Table of Contents
1. [Programs](#programs)
2. [Steps](#steps)
3. [Compilation / Execution](#compilation--execution)
4. [Sample Output](#sample-output)

---

## Programs

| Program           | Description |
|-----------------|------------|
| fork_exec.c       | Demonstrate process creation and exec replacement |
| pid_demo.c        | Display process IDs using getpid() |
| directory_demo.c  | List files in a directory using opendir() and readdir() |

---

## Steps
1. Open terminal in Fedora Linux.
2. Navigate to `05-System-Calls` folder.
3. Compile each program:
```bash
gcc fork_exec.c -o fork_exec
gcc pid_demo.c -o pid_demo
gcc directory_demo.c -o directory_demo
