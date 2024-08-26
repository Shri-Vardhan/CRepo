/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to find frequency of string using functions
 =======================================================================
 */
#include <stdio.h>


void getString(char *str, int size) {
    printf("Enter a string: ");
    fgets(str, size, stdin);
}


char getCharacter() {
    char ch;
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);  
    return ch;
}


int countFrequency(char *str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }
    return count;
}


void displayFrequency(char ch, int count) {
    printf("Frequency of %c = %d\n", ch, count);
}

int main() {
    char str[1000];
    char ch;
    int frequency;

    getString(str, sizeof(str));
    ch = getCharacter();
    frequency = countFrequency(str, ch);
    displayFrequency(ch, frequency);

    return 0;
}
