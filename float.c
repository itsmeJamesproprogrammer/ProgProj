/*
    C Program
    Description: Multiplying two floating point numbers
*/

// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    // Declaring variables
    double num1, num2, totalNum;
    char choice;

    do
    {
        system("CLS");
        printf("\n\t\t Multiplying Two Point Numbers \n");

        // First input
        printf("\n\t Enter first float integer: ");
        scanf("%lf", &num1);
        while (getchar() != '\n')
            ;

        // Second input
        printf("\n\t Enter second float integer: ");
        scanf("%lf", &num2);
        while (getchar() != '\n')
            ;

        // Solution
        totalNum = (num1 * num2);

        if (totalNum == (int)totalNum)
        {
            printf("\n\t The product is a whole number! ");
            printf("\n");
            system("PAUSE");
            system("CLS");
            getch();
        }
        else
        {
            // Therefore,
            printf("\n\t The product of the two point numbers is %lf", totalNum);
        
        Try:    
            printf("\n");
            printf("\n\t Do you want to try again? (Y/N): ");
            scanf("%c", &choice);
            while (getchar() != '\n')
                ;

            if (tolower(choice) == 'y')
            {
                main();
                getch();
            }
            else if (tolower(choice) == 'n')
            {
                system("CLS");
                printf("\n\t Program Terminated. Have a good day! ");
                printf("\n");
                exit(0);
                break;
            }
            else
            {
                printf("\n\t Invalid! Try again... ");
                goto Try;
            }
        }
    } while (totalNum == (int)totalNum);
    return 0;
}