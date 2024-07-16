/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to read and print numbers side by side using loop
 =======================================================================
 */
#include <stdio.h>
int main(){

int first_num =0;
int second_num =0;

printf("Please enter any two numbers:\n");
scanf("%d %d" , &first_num , &second_num);

int abc = second_num;


for( ; first_num<=second_num ; first_num++ )
    printf("%d %d\n" ,  first_num, abc-- );



    return 0;
}

