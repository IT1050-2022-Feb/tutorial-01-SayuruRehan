/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() //begin main
{
  int distance;      //declaring variables
  float price, total;

  printf("Enter the distance travelled in km: ");  //user input
  scanf("%d", &distance);

  if(distance > 0 &&  distance <= 30)    //condition
  {
    price = distance * 50;      //calculation
    total = price;
  }
  else
  {
    price = (distance - 30) * 40;    //calculation
    total = price + (30 * 50);
  }
  printf("The total price for the journey is = %.2f", total);    //display output
  
  return 0;
}    //end main
