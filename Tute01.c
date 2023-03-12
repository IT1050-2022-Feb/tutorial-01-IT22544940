/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int i, total, num;
  float avarage;
  i = 1, total = 0, avarage = 0;
  
  while(i!=3){
    
    printf("Eneter the marks for the %d subject : ", i);
    scanf("%d", &num);

    total = total + num;
    i++;
  }
  
  avarage = (float)total/2;
  printf("The avarage is %.2f", avarage);
  
  return 0;
}

