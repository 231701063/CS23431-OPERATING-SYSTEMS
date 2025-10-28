#include <stdio.h>

int main() {
    int n, i, j, temp;
    int bt[20], wt[20], tat[20];
    float wtavg=0, tatavg=0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("Enter burst time for process %d: ", i);
        scanf("%d", &bt[i]);
    }

    // Sort burst times (SJF)
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(bt[i] > bt[j]) {
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
    }

    wt[0] = 0;
    tat[0] = bt[0];

    for(i=1; i<n; i++) {
        wt[i] = wt[i-1] + bt[i-1];
        tat[i] = wt[i] + bt[i];
    }

    for(i=0; i<n; i++) {
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
