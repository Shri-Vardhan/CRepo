/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to print shift of a matrix
 =======================================================================
 */
#include <stdio.h>
int main(){
int shiftValue;   
int numbers[3][3]={{1,2,3} ,{8,9,4} ,{7,6,5}};   
int c=0;
int temp=0;
int r=0;
for(int r=0 ;r<3 ;r++){
    for(int c=0 ;c<3 ;c++){
        printf("%d\t" , numbers[r][c]);
    }
    printf("\n");
}
    
printf("Enter shift value:");
scanf("%d" ,&shiftValue);


for(int shift=1; shift<=shiftValue; shift++)
{
temp = numbers[0][0];

for(c=0;c<3;c++)
    numbers[c][0] = numbers[c+1][0];

for(c=0;c<3;c++)
    numbers[2][c] = numbers[2][c+1];

for(c=2;c>0;c--)
    numbers[c][2] = numbers[c-1][2];
    
    
    numbers[0][2] = numbers[0][1];
    numbers[0][1] = temp;

printf("result after shift %d\n\n", shift);

for(int r=0 ;r<3 ;r++){
    for(int c=0 ;c<3 ;c++){
        printf("%d\t" , numbers[r][c]);
    }
    printf("\n");
}


}


    return 0;
}