/*
    C Program
    Description: Adding 2 Integers and getting their Sum
*/

// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main()
{

    // Declaring Variables
    int num1, num2, totalNum;

    // First Input
    system("CLS");
    printf("\n\t\t Addition of 2 Integers: \n\n");

    printf("\n\t Enter the first integer: ");
    scanf("%d", &num1);
    while (getchar() != '\n');

    // Second Input
    printf("\n\t Enter the second integer: ");
    scanf("%d", &num2);
    while (getchar() != '\n');

    // Solution
    totalNum = (num1 + num2);

    // Therefore,
    printf("\n\t The Total Sum of the two integers is: %d\n", totalNum);
    return 0;
}