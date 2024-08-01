/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Division Pattern Program
 =======================================================================
 */
#include <stdio.h>
int main(){
    
int quo , num;    

printf("దయచేసి మీ నంబర్‌ని నమోదు చేయండి:");
scanf("%d" , &num);


for(int x = 2 ; x<10 ; x++)
{
    printf("'%d' తో విభజన:\n" , x);
    quo = num/x;
    printf("%d\n" , quo);
        for( ; quo>x ;)
    {
        quo = quo/x;
        printf("%d\n" , quo);
    } 
    printf("\n");
}

    return 0;
}