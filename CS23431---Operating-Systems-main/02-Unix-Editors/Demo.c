#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=== Unix Editors Experiment ===\n\n");

    // Create a sample text file
    printf("Creating file sample.txt with initial content...\n");
    system("echo 'Hello Linux Users!' > sample.txt");

    // Display file content
    printf("\nContent of sample.txt:\n");
    system("cat sample.txt");

    // Append text
    printf("\nAppending text to sample.txt...\n");
    system("echo 'This is a demo for Unix editors.' >> sample.txt");
    system("cat sample.txt");

    // Using sed to replace text
    printf("\nReplacing 'Linux' with 'Fedora' using sed:\n");
    system("sed -i 's/Linux/Fedora/g' sample.txt");
    system("cat sample.txt");

    // Demonstrate vi/emacs (instructions only, cannot open editors in C)
    printf("\nTo practice vi editor: vi sample.txt\n");
    printf("To practice emacs editor: emacs sample.txt\n");

    printf("\nExperiment Completed.\n");

    return 0;
}
