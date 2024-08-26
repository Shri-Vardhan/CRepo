/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to print shift cycle of a matrix in Clockwise or Anticlockwise
 NOTE        : OUTER CYLE =1
               INNER CYCLE =2
 =======================================================================
 */
#include <stdio.h>

int main() {

    int shiftValue, cyclevalue, direction;
    char repeat; // Change from int to char
    int numbers[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int temp, r, c;
    
    do {
        
        for (r = 0; r < 5; r++) {
            for (c = 0; c < 5; c++) {
                printf("%d\t", numbers[r][c]);
            }
            printf("\n");
        }

        
        printf("\nEnter Cycle Value: ");
        scanf("%d", &cyclevalue);

        printf("Enter Shift Value: ");
        scanf("%d", &shiftValue);

        printf("Enter Direction (1 for Clockwise, 2 for Anti-Clockwise): ");
        scanf("%d", &direction);


        for (int shift = 1; shift <= shiftValue; shift++) {
            if (cyclevalue == 1) {
                if (direction == 1) {  
                    temp = numbers[0][0];

                    for (c = 0; c < 4; c++) 
                        numbers[c][0] = numbers[c+1][0];

                    for (c = 0; c < 4; c++) 
                        numbers[4][c] = numbers[4][c+1];

                    for (c = 4; c > 0; c--) 
                        numbers[c][4] = numbers[c-1][4];

                    for (c = 4; c > 1; c--) 
                        numbers[0][c] = numbers[0][c-1];

                    numbers[0][1] = temp;

                } else if (direction == 2) {   
                    temp = numbers[0][0];

                    for (c = 0; c < 4; c++) 
                        numbers[0][c] = numbers[0][c+1];

                    for (c = 0; c < 4; c++) 
                        numbers[c][4] = numbers[c+1][4];

                    for (c = 4; c > 0; c--) 
                        numbers[4][c] = numbers[4][c-1];

                    for (c = 4; c > 1; c--) 
                        numbers[c][0] = numbers[c-1][0];

                    numbers[1][0] = temp;
                }

            } else if (cyclevalue == 2) {
                if (direction == 1) {  
                    temp = numbers[1][1];

                    for (c = 1; c < 3; c++) 
                        numbers[c][1] = numbers[c+1][1];

                    for (c = 1; c < 3; c++) 
                        numbers[3][c] = numbers[3][c+1];

                    for (c = 3; c > 1; c--) 
                        numbers[c][3] = numbers[c-1][3];

                    for (c = 3; c > 2; c--) 
                        numbers[1][c] = numbers[1][c-1];

                    numbers[1][2] = temp;

                } else if (direction == 2) {  
                    temp = numbers[1][1];

                    for (c = 1; c < 3; c++) 
                        numbers[1][c] = numbers[1][c+1];

                    for (c = 1; c < 3; c++) 
                        numbers[c][3] = numbers[c+1][3];

                    for (c = 3; c > 1; c--) 
                        numbers[3][c] = numbers[3][c-1];

                    for (c = 3; c > 2; c--) 
                        numbers[c][1] = numbers[c-1][1];

                    numbers[2][1] = temp;
                }
            }
        }


        printf("\nShifted Array:\n");
        for (r = 0; r < 5; r++) {
            for (c = 0; c < 5; c++) {
                printf("%d\t", numbers[r][c]);
            }
            printf("\n");
        }

   
        printf("\nDo you want to shift again? (Y/N): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y');

    return 0;
}
