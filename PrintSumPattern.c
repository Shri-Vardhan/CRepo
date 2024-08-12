/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to print all possible outcomes of a sum
 =======================================================================
 */
#include <stdio.h>

int main() {
int size=0,sum,ABC=0;

printf("Enter the size of array:");
scanf("%d" , &size);
int num[size];


for(int i=0 ; i<size ; i++){
    printf("Enter array num[%d]:" , i);
    scanf("%d" , &num[i]);
}

printf("Enter sum value:");
scanf("%d" , &sum);

for(int i=0 ; i<size ;i++){
    for(int j=i+1 ; j<size ;j++){
        if(num[i]+num[j]==sum){
            printf("num[%d]+num[%d]=%d\n" , i,j,sum);
            ABC=1;
            }
        
    }
}

if(ABC==0){
    printf("No two numbers make up your give sum");
}

    return 0;
}