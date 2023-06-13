/*
    C Program
    Description: Swapping the values of 2 integers
*/

// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main()
{

    // Declaring Variables
    int num1, num2, numSwap;

    system("CLS");
    printf("\n\t\t Swapping Values \n\n");

    do
    {

        // First Input
        printf("\n\t Enter first Integer: ");
        scanf("%d", &num1);
        while (getchar() != '\n')
            ;

        // Second Input
        printf("\n\t Enter second integer: ");
        scanf("%d", &num2);
        while (getchar() != '\n')
            ;

        // Solution
        numSwap = num1;
        num1 = num2;
        num2 = numSwap;

        if (num1 == num2)
        {
            printf("\n\t Invalid, the same values. Try again... \n");
            printf("\n");
            system("PAUSE");
            system("CLS");
            // main();
            // getch();
        }
        else
        {
            // Therefore,
            printf("\n\t\t After swapping the values of each integer: \n");
            printf("\n\t The Value of first integer is now %d\n", num1);
            printf("\n\t The Value of the second integer is now %d\n", num2);
        }
    } while (num1 == num2);
    return 0;
}