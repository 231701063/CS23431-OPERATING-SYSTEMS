#include <stdio.h>

int main() {
    int n, i, j, temp;
    int bt[20], priority[20], wt[20], tat[20];
    float wtavg=0, tatavg=0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("Enter burst time for process %d: ", i);
        scanf("%d", &bt[i]);
        printf("Enter priority for process %d (lower value = higher priority): ", i);
        scanf("%d", &priority[i]);
    }

    // Sort by priority
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(priority[i] > priority[j]) {
                temp = priority[i]; priority[i] = priority[j]; priority[j] = temp;
                temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
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

    printf("\nPROCESS\tBURST TIME\tPRIORITY\tWAITING TIME\tTURNAROUND TIME\n");
    for(i=0; i<n; i++)
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\n", i, bt[i], priority[i], wt[i], tat[i]);

    printf("\nAverage Waiting Time: %.2f\n", wtavg/n);
    printf("Average Turnaround Time: %.2f\n", tatavg/n);

    return 0;
}
