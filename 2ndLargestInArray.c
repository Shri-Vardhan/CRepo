/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to print 2nd largest number in an array
 =======================================================================
 */
#include <stdio.h>

int main() {
int size=0 , tem;
printf("Enter the size of array:");
scanf("%d" , &size);
int num[size];


for(int i=0 ; i<size ; i++){
    printf("Enter array num[%d]:" , i);
    scanf("%d" , &num[i]);
}

for (int i = 0; i < size - 1; i++) {
   		for (int j = i + 1; j < size; j++) {
     		if (num[i] > num[j]) {
       			tem = num[i];
       			num[i] = num[j];
       			num[j] = tem;
     		}
   		}
 	}

printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    

    int largest = num[size - 1];
    int second_largest = 0;
    
    for (int i = size - 2; i >= 0; i--) {
        if (num[i] < largest) {
            second_largest = num[i];
            break;
        }
    }

    if (second_largest == 0) {
        printf("There is no second largest number\n");
    } else {
        printf("The second largest number is: %d\n", second_largest);
    }
    
   
    return 0;
}