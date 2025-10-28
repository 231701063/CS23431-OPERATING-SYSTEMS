#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=== Linux Commands Experiment ===\n\n");

    // General Commands
    printf("Current Date & Time:\n");
    system("date");

    printf("\nCalendar of Current Month:\n");
    system("cal");

    printf("\nCurrent Working Directory:\n");
    system("pwd");

    printf("\nList of Files in Current Directory:\n");
    system("ls -l");

    printf("\nWho is logged in:\n");
    system("who");

    // File & Directory Commands - simple demo
    printf("\nCreate a file 'testfile.txt' and add content:\n");
    system("echo 'Hello Linux!' > testfile.txt");

    printf("\nDisplay content of testfile.txt:\n");
    system("cat testfile.txt");

    printf("\nAppend content to testfile.txt:\n");
    system("echo 'This is appended line.' >> testfile.txt");
    system("cat testfile.txt");

    printf("\nCopy testfile.txt to testcopy.txt:\n");
    system("cp testfile.txt testcopy.txt");

    printf("\nRename testcopy.txt to testcopy2.txt:\n");
    system("mv testcopy.txt testcopy2.txt");

    printf("\nRemove testcopy2.txt:\n");
    system("rm -f testcopy2.txt");

    printf("\nList all files including hidden:\n");
    system("ls -a");

    printf("\nExperiment Completed.\n");

    return 0;
}
