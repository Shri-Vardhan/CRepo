/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to print number of words in string using functions
 =======================================================================
 */
#include <stdio.h>


int countSpaces(char name[]) {
    int i, spaceCount = 0;
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            spaceCount++;
        }
    }
    return spaceCount;
}


int countWords(char name[]) {
    int spaceCount = countSpaces(name);
    return spaceCount + 1;
}


int main() {
    char name[1000];
    
    printf("Enter Name: ");
    gets(name);  
    
    int wordCount = countWords(name);
    
    printf("Number of words: %d\n", wordCount);
    
    return 0;
}
