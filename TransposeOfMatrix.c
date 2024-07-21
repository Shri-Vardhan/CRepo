/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to print Transpose of Matrix
 =======================================================================
 */
#include <stdio.h>
int main(){

int r ,c , a,b ;    
printf("Enter number of rows and columns:");
scanf("%d %d" , &r , &c);
int matrix[r][c] ,transpose[c][r];

printf("Enter elements of matrix:");
for(a=0 ; a<r ;a++){
    for(b=0 ;b<c ;b++){
        scanf("%d" , &matrix[a][b]);
    }
}

printf("Entered matrix is\n"); 
for(a=0 ; a<r ;a++){
    for(b=0 ;b<c ;b++){
        printf("%d" , matrix[a][b]);
    }
    printf("\n");
}


 for(a=0 ; a<r ;a++){
    for(b=0 ;b<c ;b++){
        transpose[b][a] = matrix[a][b];
    }
    printf("\n");
}


printf("Transpose of matrix is \n");
    for (a = 0; a< c; a++){
        for (b = 0; b < r; b++){
           printf("%d ", transpose[a][b]);
        }
        printf("\n");
    }

    
return 0;
}