#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>

int main() {
    key_t key = 1234;
    int shmid;
    char *data;

    // Create shared memory
    shmid = shmget(key, 1024, 0666|IPC_CREAT);
    if(shmid < 0) {
        perror("shmget failed");
        exit(1);
    }
    printf("Shared memory created with ID: %d\n", shmid);

    // Attach to shared memory
    data = (char*) shmat(shmid, NULL, 0);
    if(data == (char*) -1) {
        perror("shmat failed");
        exit(1);
    }

    // Write data
    strcpy(data, "Hello from process 1");
    printf("Data written: %s\n", data);

    // Detach shared memory
    shmdt(data);

    return 0;
}
