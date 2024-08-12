/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to print number of words in a string
 {GIVEN BELOW ARE TWO METHODS OF PRINTING NUMBER OF WORDS IN A STRING}
 =======================================================================
 */
#include <stdio.h>

int main() {
    char name[1000];
    int i, spaceCount = 0;

    printf("Enter Name:");
    gets(name);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            spaceCount++;
        }
    }

    int wordCount = spaceCount + 1;

    printf("Number of words: %d\n", wordCount);

    return 0;
}
-------------------------------------------------------------------------------------------
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    char name[30];
    int i, wordCount = 1;

    printf("Enter Name: ");
    gets(name);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            wordCount++;
        }
    }

    printf("Number of words: %d\n", wordCount);

    return 0;
}