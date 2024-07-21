/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to print largest number amongst three entered numbers
 =======================================================================
 */
#include <stdio.h>
int main(){

int a,b,c;
printf("Enter 3 numbers:");
scanf("%d %d %d" , &a ,&b ,&c);
if(c>a&&c>b){
    printf("Largest number is %d\n" , c);
}
else if(b>a&&b>c){
    printf("Largest number is %d\n" , b);
}
else if (a>b&&a>c){
    printf("Largest number is %d\n" , a);
}

if (a > b) {
        if (a > c) {
            printf(" Largest number is %d\n", a);
        } else {
            printf("Largest number is %d\n", c);
        }
    } else {
        if (b > c) {
            printf("Largest number is %d\n", b);
        } else {
            printf("Largest number is %d\n", c);
        }
    }

    
return 0;
}