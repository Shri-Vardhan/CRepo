/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to check numbers that print out the sum using functions
 =======================================================================
 */
#include <stdio.h>


void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter array num[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}


int checkSumPairs(int arr[], int size, int sum) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("num[%d] + num[%d] = %d\n", i, j, sum);
                return 1; // Return 1 if a pair is found
            }
        }
    }
    return 0; 
}


int main() {
    int size = 0, sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);
    int num[size];

    inputArray(num, size);

    printf("Enter sum value: ");
    scanf("%d", &sum);

    int result = checkSumPairs(num, size, sum);

    if (result == 0) {
        printf("No two numbers make up your given sum.\n");
    }

    return 0;
}
