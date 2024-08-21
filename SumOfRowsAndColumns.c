/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to print sum of rows and columns in a matrix
 =======================================================================
 */
#include <stdio.h>

int main() {
    int x, sumr, sumc;
    printf("Enter size of matrix: ");
    scanf("%d", &x);

    int matrix[x][x];
    printf("Input elements into the matrix\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("*********\nEntered Matrix:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf("%d ", matrix[i][j]); 
        }
        printf("\n");
    }

    
    printf("*********\nRow Sums:\n");
    for (int i = 0; i < x; i++) {
        sumr = 0; 
        for (int j = 0; j < x; j++) {
            sumr += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i, sumr); 
    }

    
    printf("*********\nColumn Sums:\n");
    for (int j = 0; j < x; j++) {
        sumc = 0; 
        for (int i = 0; i < x; i++) {
            sumc += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j, sumc);  
    }

    return 0;
}

