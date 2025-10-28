
---

### **bankers.c** – Sample Code

```c
#include <stdio.h>

int main() {
    int n, m, i, j, k;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter number of resources: ");
    scanf("%d", &m);

    int alloc[n][m], max[n][m], avail[m], f[n], ans[n], ind=0;

    printf("Enter Allocation Matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&alloc[i][j]);

    printf("Enter Max Matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&max[i][j]);

    printf("Enter Available Resources:\n");
    for(i=0;i<m;i++)
        scanf("%d",&avail[i]);

    int need[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            need[i][j] = max[i][j]-alloc[i][j];

    for(i=0;i<n;i++) f[i]=0;

    int y=0;
    for(k=0;k<5;k++) {
        for(i=0;i<n;i++) {
            if(f[i]==0) {
                int flag=0;
                for(j=0;j<m;j++)
                    if(need[i][j]>avail[j]) flag=1;
                if(flag==0) {
                    ans[ind++]=i;
                    for(y=0;y<m;y++) avail[y]+=alloc[i][y];
                    f[i]=1;
                }
            }
        }
    }

    printf("\nSafe Sequence is: ");
    for(i=0;i<n;i++)
        printf("P%d ", ans[i]);

    printf("\n");
    return 0;
}
