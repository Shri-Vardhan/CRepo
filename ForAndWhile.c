/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to read a value and print using For and While loop
 =======================================================================
 */
#include <stdio.h>
int     main(){
int     start_num;
int     end_num;

printf  ("Please enter any two numbers:\n");
scanf ("%d %d" , &start_num , &end_num);

int     x =start_num;
int     y =end_num;

printf("Value of x before FOR loop = %d\n" , x);
for(; x<= y; x++) {
    printf("%d\n" , x);
}

printf("Value of x after FOR loop = %d\n" , x);
  x =start_num;
printf("Value of x before WHILE loop = %d\n" , x);

while (x < y){
    printf("%d\n" , x);
 x++;
}
printf("Value of x after While loop = %d\n" , x);

return 0;
}
