#include <stdio.h>

//Taiyo Suzuki
//Sept 30, 2022
//PROG71985F22 - Assignment 2
//Item 1: Take an integer input and then print all the integers from (and including) that value
//up to (and including) a value larger by 11, separating each output value by a newline

//definitions
#define LARGER_BY_ELEVEN 11

int main(void)
{
    int numInput;

    printf("Please enter an integer and press enter: ");                        //prompt user for input

    if (scanf_s("%d", &numInput) == 0)											//scan for user input and check if it is an integer, and if it is, save it
    {
        printf("\nInput not recognised as an integer, please try again.\n");	//if it is not an integer, exit the program
        exit(1);
    }

    for (int i = 0; i <= LARGER_BY_ELEVEN; i++)
    {
        printf("%d\n", numInput + i);                                           //print output values
    }

    return 0;
}