![Language](https://img.shields.io/badge/Language-C-blue.svg)
![OS](https://img.shields.io/badge/OS-Fedora%20Linux-purple.svg)
![Last Commit](https://img.shields.io/github/last-commit/Pugazhendhi231701042/CS23431---Operating-Systems)
![Stars](https://img.shields.io/github/stars/Pugazhendhi231701042/CS23431---Operating-Systems?style=social)

# Experiment 07 – Inter-process Communication (IPC) using Shared Memory

## Aim
To implement communication between two processes using shared memory in Linux.

---

## Table of Contents
1. [Programs](#programs)
2. [Steps](#steps)
3. [Compilation / Execution](#compilation--execution)
4. [Sample Output](#sample-output)

---

## Programs

| Program      | Description |
|-------------|------------|
| writer.c    | Creates shared memory and writes data |
| reader.c    | Reads data from the shared memory |

---

## Steps
1. Open terminal in Fedora Linux.
2. Navigate to `07-IPC-Shared-Memory` folder.
3. Compile programs:
```bash
gcc writer.c -o writer
gcc reader.c -o reader
