// A program for Checking if the student Passed or Failed (Side is Given)
/*Practice Program 1*/
#include<stdio.h>
int main()
{

int marks;
printf("Enter Marks: ");                   //Input
scanf("%d", &marks);

if (marks>30 && marks<=100) 
{
    printf("Passed");
}
else if (marks>0 && marks<30)
{
     printf("Failed");
}

else{
    printf("Invalid Marks");
}

return 0;

}
