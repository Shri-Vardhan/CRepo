/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to print numbers in pyramid
 =======================================================================
 */
#include <stdio.h>

int main() {
int x=5;
int y=10;



for (int i=x; i<=y ; i++){
printf("\n%d" , i);

for (int j=i+1; j<=y ; j++)
printf("%d" , j);


}

    return 0;
}
