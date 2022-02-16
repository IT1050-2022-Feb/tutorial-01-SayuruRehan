/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//function declaration
int max(int no1, int no2);
int min(int no1, int no2);
int mul(int no1, int no2);

int main() 
{
   int no1, no2, maximum, minimum, multiply;

   printf("Enter a value for no 1 : "); //user input
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   
   //calling functions
   maximum = max(no1, no2);
   minimum = min(no1, no2);
   multiply = mul(no1, no2);
  
   printf("\nMinimum = %d ", minimum);
   printf("\nMaximum = %d ", maximum);
   printf("\nMultiplication = %d ", multiply);

   return 0;
}

int max(int no1, int no2) //finding maximum
{
  return(no1 > no2) ? no1 : no2;
}

int min(int no1, int no2) //finding minimum
{
  return(no1 > no2) ? no2 : no1;
}

int mul(int no1, int no2) //finding multiplication
{
  return(no1 * no2);
}