// A program for Calculating Area of a Square (Side is Given)
/*Practice Program 1*/
#include<stdio.h>
int main()
{

float side, area;
printf("Enter the Side of the Square: ");                   //Input
scanf("%f", &side);

area=side*side;                                            //Calculation

printf("\n\n The Area of the Square is: %.2f\n\n\n",area); //Output


return 0;

}
