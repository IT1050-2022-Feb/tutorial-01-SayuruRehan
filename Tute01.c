/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1, mark2, total;  //declaring variables
  float avg;

  printf("Enter two marks: ");  //user input
  scanf("%d %d", &mark1, &mark2);

  total = mark1 + mark2;  //calculating total
  avg = total / 2;  //calculating average

  printf("Average = %.2f", avg);  //display average
  
  return 0;
}

