/*Project 2

Calculating Cube of a Number (Number is given)

*/


#include<stdio.h>
int main()
{

    float n,result;

        printf("Enter the Number: ");                                //Input
        scanf("%f", &n);


    result=n*n*n;                                                   //Calculation


        printf("\n\n Cube of the Number is: %.2f\n\n\n",result);    //Output


    return 0;

}
