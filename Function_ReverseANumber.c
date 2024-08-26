/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to reverse a number using functions
 =======================================================================
 */
#include <stdio.h>


int getInput() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    return number;
}


int reverseNumber(int number) {
    int reversedNumber = 0, remainder;

    while (number != 0) {
        remainder = number % 10;         
        reversedNumber = reversedNumber * 10 + remainder; 
        number /= 10;                     
    }

    return reversedNumber;
}

void printReversedNumber(int reversedNumber) {
    printf("Reversed Number: %d\n", reversedNumber);
}

int main() {
    int number = getInput();
    int reversedNumber = reverseNumber(number);
    printReversedNumber(reversedNumber);

    return 0;
}
