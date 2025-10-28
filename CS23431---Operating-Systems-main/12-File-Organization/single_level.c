
---

### **single_level.c** – Sample Code

```c
#include <stdio.h>
#include <string.h>

int main() {
    char files[10][20];
    int n=0, choice;
    char fname[20];

    while(1){
        printf("\n1.Create File\n2.Display Files\n3.Exit\nEnter choice: ");
        scanf("%d",&choice);
        if(choice==1){
            printf("Enter file name: ");
            scanf("%s",fname);
            strcpy(files[n++], fname);
            printf("File created: %s\n", fname);
        }
        else if(choice==2){
            printf("Files:\n");
            for(int i=0;i<n;i++) printf("%s\n", files[i]);
        }
        else break;
    }
    return 0;
}
