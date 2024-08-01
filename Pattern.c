/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Pattern Program
 =======================================================================
 */
#include <stdio.h>

int main() {
    int sumValue = 1;
    int n2 = 2;
 printf("\n%d", sumValue);
 printf("\n%d", n2);
 
for(int i=1 ; i<4 ; i++){
    int currentValue = (n2*2)+sumValue;
    printf("\n\n%d", currentValue);
    sumValue = sumValue+n2;
    n2 = currentValue;
}



    return 0;
}