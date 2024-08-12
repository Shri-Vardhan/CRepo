/*
 ============================================================================
 Name        : Git-C-Programs.c
 Author      : Shrivardhan
 Version     :
 Copyright   : Your copyright notice
 Description : Program to count number of vowels consonants and white spaces in a string
 =======================================================================
 */
#include <stdio.h>
#include <ctype.h>

int main() {

 char line[100];
  int vowels, consonant,  space;


  vowels = consonant = space = 0;


  printf("Enter a line of string: ");
  fgets(line, sizeof(line), stdin); 

  for (int i = 0; line[i] != '\0'; ++i) {


    line[i] = tolower(line[i]);

    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u') {


      ++vowels;
    }


    else if ((line[i] >= 'a' && line[i] <= 'z')) {
      ++consonant;
    }


    else if (line[i] == ' ') {
      ++space;
    }
  }

  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nWhite spaces: %d", space);

  return 0;
}