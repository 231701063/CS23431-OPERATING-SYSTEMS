#include <stdio.h>

int main() {
    int n, m, i, j;
    printf("Enter number of memory blocks: ");
    scanf("%d", &n);
    int blockSize[n];
    printf("Enter size of each block:\n");
    for(i=0;i<n;i++) scanf("%d",&blockSize[i]);

    printf("Enter number of processes: ");
    scanf("%d", &m);
    int processSize[m];
    printf("Enter size of each process:\n");
    for(i=0;i<m;i++) scanf("%d",&processSize[i]);

    int allocation[m];
    for(i=0;i<m;i++) allocation[i]=-1;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(blockSize[j]>=processSize[i]){
                allocation[i]=j;
                blockSize[j]-=processSize[i];
                break;
            }
        }
    }

    for(i=0;i<m;i++){
        if(allocation[i]!=-1) printf("Process %d allocated to Block %d\n", i, allocation[i]);
        else printf("Process %d not allocated\n", i);
    }

    return 0;
}
