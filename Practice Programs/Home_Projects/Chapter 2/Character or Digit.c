// Project 5
// Checking if the given Character is Digit or not
#include<stdio.h>
int main(){

    char x;
    printf("Enter the Character: ");
    scanf("%c",&x);                                 //Input
    printf("%d",(x>='0') && (x<='9'));              //Checking
// 0 means Character & 1 means Digit
}