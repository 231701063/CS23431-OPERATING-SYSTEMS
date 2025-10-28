#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main() {
    key_t key = 1234;
    int shmid;
    char *data;

    // Access shared memory
    shmid = shmget(key, 1024, 0666);
    if(shmid < 0) {
        perror("shmget failed");
        exit(1);
    }

    // Attach to shared memory
    data = (char*) shmat(shmid, NULL, 0);
    if(data == (char*) -1) {
        perror("shmat failed");
        exit(1);
    }

    // Read data
    printf("Data read from shared memory: %s\n", data);

    // Detach shared memory
    shmdt(data);

    // Destroy shared memory
    shmctl(shmid, IPC_RMID, NULL);

    return 0;
}
