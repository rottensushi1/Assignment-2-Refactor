#include "Functions.h"

//Taiyo Suzuki
//Sept 30, 2022
//PROG71985F22 - Assignment 2
//Item 1: Take an integer input and then print all the integers from (and including) that value
//up to (and including) a value larger by 11, separating each output value by a newline

//definitions
#define LARGER_BY_ELEVEN 11

void PrintOutput(int* input)
{
    for (int i = 0; i <= LARGER_BY_ELEVEN; i++)
    {
        printf("%d\n", *input + i);             //print output values
    }
}