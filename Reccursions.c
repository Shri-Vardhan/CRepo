/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to understand recursions
 =======================================================================
 */
#include <stdio.h>



void divide(int k) {
	
	k = k/2;
    printf("\nCurrent value of K is %d", k);
  	if (k > 0) {
    	divide(k);
     }
     printf("\nValue of K is %d", k);

}

int main() {
    printf("Value of K set to 10");
	divide(10);
  return 0;
}
