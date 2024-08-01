/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Divison pattern
 =======================================================================
 */
#include <stdio.h>

void divide(int num , int x){
    if (num<x){
        return;
    }
    int quo = num / x;
    printf("%d\n", quo);
    divide(quo, x);
}

int main() {
    int num;
    printf("దయచేసి మీ నంబర్‌ని నమోదు చేయండి:");
    scanf("%d", &num);
     for (int x = 2; x < 10; x++) {
        printf("'%d' తో విభజన:\n", x);
        divide(num, x);
        printf("\n");
    }
    return 0;
}

