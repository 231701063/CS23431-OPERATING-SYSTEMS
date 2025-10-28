#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid;
    pid = fork();

    if(pid < 0) {
        printf("Fork failed.\n");
        return 1;
    } else if(pid == 0) {
        printf("Child PID: %d\n", getpid());
        printf("Child executing 'ls -l'...\n");
        execlp("ls", "ls", "-l", NULL);
        printf("Exec failed.\n");
    } else {
        printf("Parent PID: %d\n", getpid());
        wait(NULL);
        printf("Child process finished.\n");
    }

    return 0;
}
