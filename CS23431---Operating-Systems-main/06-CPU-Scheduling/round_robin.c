#include <stdio.h>

int main() {
    int n, i, j, tq=2, total=0;
    int bt[20], temp[20];
    
    printf("Enter number of processes: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("Enter burst time for process %d: ", i);
        scanf("%d", &bt[i]);
        temp[i] = bt[i];
    }

    int wt[20]={0}, tat[20]={0};
    int done = 0;

    while(done < n) {
        done = 0;
        for(i=0; i<n; i++) {
            if(temp[i] > 0) {
                if(temp[i] > tq) {
                    temp[i] -= tq;
                    total += tq;
                } else {
                    total += temp[i];
                    wt[i] = total - bt[i];
                    temp[i] = 0;
                }
            } else done++;
        }
    }

    for(i=0; i<n; i++)
        tat[i] = bt[i] + wt[i];

    float wtavg=0, tatavg=0;
    for(i=0; i<n; i++){
        wtavg += wt[i];
        tatavg += tat[i];
    }

    printf("\nPROCESS\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");
    for(i=0; i<n; i++)
        printf("P%d\t%d\t\t%d\t\t%d\n", i, bt[i], wt[i], tat[i]);

    printf("\nAverage Waiting Time: %.2f\n", wtavg/n);
    printf("Average Turnaround Time: %.2f\n", tatavg/n);

    return 0;
}
