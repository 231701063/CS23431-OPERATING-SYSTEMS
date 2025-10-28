
---

### **producer_consumer.c**

```c
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define SIZE 5

int buffer[SIZE];
int in = 0, out = 0;

sem_t empty;
sem_t full;
pthread_mutex_t mutex;

void *producer(void *arg) {
    int item, i;
    for(i=1; i<=10; i++) {
        item = i;
        sem_wait(&empty);
        pthread_mutex_lock(&mutex);
        buffer[in] = item;
        printf("Producer produced item %d\n", item);
        in = (in+1)%SIZE;
        pthread_mutex_unlock(&mutex);
        sem_post(&full);
        sleep(1);
    }
    pthread_exit(0);
}

void *consumer(void *arg) {
    int item, i;
    for(i=1; i<=10; i++) {
        sem_wait(&full);
        pthread_mutex_lock(&mutex);
        item = buffer[out];
        printf("Consumer consumed item %d\n", item);
        out = (out+1)%SIZE;
        pthread_mutex_unlock(&mutex);
        sem_post(&empty);
        sleep(2);
    }
    pthread_exit(0);
}

int main() {
    pthread_t tid1, tid2;

    sem_init(&empty,0,SIZE);
    sem_init(&full,0,0);
    pthread_mutex_init(&mutex,NULL);

    pthread_create(&tid1,NULL,producer,NULL);
    pthread_create(&tid2,NULL,consumer,NULL);

    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);

    sem_destroy(&empty);
    sem_destroy(&full);
    pthread_mutex_destroy(&mutex);

    return 0;
}
