/*
 ============================================================================
 Name        : Temp-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Matrix Multiplication in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(){
    
int i , j , k , a[2][2] , b[2][2] , c[2][2] , value=0;

    printf("Enter first matrix values:");
    for(i=0 ;i<2 ;i++){
        for(j=0 ;j<2 ;j++){
            scanf("%d" , &a[i][j]);
        }
    }
    
    printf("ENter second matrix values:");
    for(i=0 ;i<2 ;i++){
        for(j=0 ;j<2 ;j++){
            scanf("%d" , &b[i][j]);
        }
    }
    
for(i=0 ;i<2 ;i++)
    for(j=0 ;j<2 ;j++){
        for(k=0 ;k<2 ;k++)
            value=value + (a[i][k] * b[k][j]);
        
        printf("%d\t", value);   
        value=0;
    } 

printf("\n");

    return 0;
}