// A program for Calculating Area of a Circle (Radius is Given)
/*Practice Program 2*/
#include<stdio.h>
int main()
{

float radius, area;
printf("Enter the Radius of the Circle: ");                              //Input
scanf("%f", &radius);

area=radius*radius*3.1416;                                               //Calculation

printf("\n\n The Area of the Square is: %.2f\n\n\n",area);               //Output


return 0;

}
