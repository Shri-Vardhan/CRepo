/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to print Array in ascending order
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
        printf("%d ", num[size]);
    }
    printf("\n");
    return 0;
}