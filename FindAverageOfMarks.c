/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to find average of marks
 =======================================================================
 */
#include <stdio.h>

#define STUDENTS 5
#define SUBJECTS 6

int main() {
    int marks[STUDENTS][SUBJECTS];
    float average[STUDENTS];
    int i, j;

    
    for(i = 0; i < STUDENTS; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for(j = 0; j < SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

   
    for(i = 0; i < STUDENTS; i++) {
        int sum = 0;
        for(j = 0; j < SUBJECTS; j++) {
            sum += marks[i][j];
        }
        average[i] = sum / (float)SUBJECTS;
    }

    
    for(i = 0; i < STUDENTS; i++) {
        printf("Average marks for student %d: %.2f\n", i + 1, average[i]);
    }

    return 0;
}