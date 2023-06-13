/*
    This is first output in C program
*/

//Preprocessor Directives
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

//Function Definition
int callbyFunction();

int main() {
    callbyFunction();   
    return 0;
}

int callbyFunction() {
    printf("\n\t Hello World! \n");
}