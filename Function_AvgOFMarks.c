/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to find average of marks using functions
 =======================================================================
 */
#include <stdio.h>

#define STUDENTS 5
#define SUBJECTS 6

void inputMarks(int marks[STUDENTS][SUBJECTS]) {
    for(int i = 0; i < STUDENTS; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for(int j = 0; j < SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
}

void calculateAverages(int marks[STUDENTS][SUBJECTS], float average[STUDENTS]) {
    for(int i = 0; i < STUDENTS; i++) {
        int sum = 0;
        for(int j = 0; j < SUBJECTS; j++) {
            sum += marks[i][j];
        }
        average[i] = sum / (float)SUBJECTS;
    }
}

void displayAverages(float average[STUDENTS]) {
    for(int i = 0; i < STUDENTS; i++) {
        printf("Average marks for student %d: %.2f\n", i + 1, average[i]);
    }
}

int main() {
    int marks[STUDENTS][SUBJECTS];
    float average[STUDENTS];

    inputMarks(marks);
    calculateAverages(marks, average);
    displayAverages(average);

    return 0;
}
