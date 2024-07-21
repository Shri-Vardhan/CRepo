/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to print numbers in reverse
 =======================================================================
 */
#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    
    printf("Enter an number: ");
    scanf("%d", &number);

  
    while (number != 0) {
        remainder = number % 10;         
        reversedNumber = reversedNumber * 10 + remainder; 
        number /= 10;                     
    }

    
    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}
