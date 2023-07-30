/*Project 1

Calculating the Perimeter of a Rectangle (Sides are given)

*/


#include<stdio.h>
int main()
{

float side1, side2, perimeter;

printf("Enter the Side (x axis): ");                                //Input
scanf("%f", &side1);

printf("Enter the Side (y axis): ");                                //Input
scanf("%f", &side2);


perimeter=side1+side2;                                            //Calculation



printf("\n\n The Perimeter of the Rectangle is: %.2f\n\n\n",perimeter); //Output


return 0;

}






