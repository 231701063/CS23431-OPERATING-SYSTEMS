#include <stdio.h>
#include <string.h>

typedef struct {
    char username[20];
    char files[10][20];
    int file_count;
} User;

int main() {
    User users[5];
    int user_count=0, choice;
    char uname[20], fname[20];

    while(1){
        printf("\n1.Add User\n2.Create File\n3.Display Files\n4.Exit\nEnter choice: ");
        scanf("%d",&choice);
        if(choice==1){
            printf("Enter username: ");
            scanf("%s", uname);
            strcpy(users[user_count].username, uname);
            users[user_count].file_count=0;
            user_count++;
        }
        else if(choice==2){
            printf("Enter username: ");
            scanf("%s", uname);
            int idx=-1;
            for(int i=0;i<user_count;i++) if(strcmp(users[i].username, uname)==0) idx=i;
            if(idx==-1){ printf("User not found\n"); continue; }
            printf("Enter file name: ");
            scanf("%s", fname);
            strcpy(users[idx].files[users[idx].file_count++], fname);
            printf("File created: %s\n", fname);
        }
        else if(choice==3){
            for(int i=0;i<user_count;i++){
                printf("Files for %s:\n", users[i].username);
                for(int j=0;j<users[i].file_count;j++)
                    printf("%s\n", users[i].files[j]);
            }
        }
        else break;
    }
    return 0;
}
