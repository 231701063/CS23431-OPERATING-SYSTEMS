#include <stdio.h>

int main() {
    int n, frames, i, j, k, flag, pos=0, page_faults=0;
    printf("Enter number of pages: ");
    scanf("%d",&n);
    int pages[n];
    printf("Enter page sequence:\n");
    for(i=0;i<n;i++) scanf("%d",&pages[i]);

    printf("Enter number of frames: ");
    scanf("%d",&frames);
    int frame[frames], used[frames];
    for(i=0;i<frames;i++) frame[i]=-1, used[i]=0;

    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<frames;j++){
            if(frame[j]==pages[i]){
                flag=1;
                used[j]=i;
            }
        }
        if(flag==0){
            int lru_index=0;
            for(j=1;j<frames;j++)
                if(used[j]<used[lru_index]) lru_index=j;
            frame[lru_index]=pages[i];
            used[lru_index]=i;
            page_faults++;
        }
    }

    printf("Page faults: %d\n", page_faults);
    return 0;
}
