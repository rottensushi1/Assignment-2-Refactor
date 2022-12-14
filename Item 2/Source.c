#include "Functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Taiyo Suzuki
//Sept 30, 2022
//PROG71985F22 - Assignment 2
//Item 2: Using a for loop, print a table using ASCII (printable) characters with each line giving an integer, its square root,
//its square and its cube. Ask the user to enter a lower and upper limit for the table, but limit input to stay between 0 and 50.

//definitions
#define LOWER_LIMIT   0																	//hard limits
#define UPPER_LIMIT   50

int main(void)																			//TODO REPLACE NESTED IFS WITH AN INPUT FUNCTION
{
	int lowerLimitInput = LOWER_LIMIT, upperLimitInput = UPPER_LIMIT;					//initial limit values same as constant limits

	printf("Please enter lower limit (between 0-50): ");								//prompt user for first input

	if (scanf_s("%d", &lowerLimitInput) == 0)											//scan for user input and check if it is an integer, and if it is, save it
	{
		printf("\nInput not recognised as an integer, please try again.\n");			//if it is not an integer, exit the program
		exit(1);
	}

	if (LOWER_LIMIT <= lowerLimitInput && lowerLimitInput <= UPPER_LIMIT)				//check if lower limit is between hard limits (0 & 50)
	{
		printf("Please enter upper limit (between %d-50): ", lowerLimitInput);			//prompt user for second input

		if (scanf_s("%d", &upperLimitInput) == 0)										//scan for user input and check if it is an integer, and if it is, save it
		{
			printf("\nInput not recognised as an integer, please try again.\n");		//if it is not an integer, exit the program
			exit(1);
		}												

		if (upperLimitInput <= UPPER_LIMIT && lowerLimitInput <= upperLimitInput)		//check if upper limit is between lower limit & 50
		{
			PrintOutput(&lowerLimitInput, &upperLimitInput);
		}
		else
		{
			printf("\nValue out of range, please try again.\n");						//tell user when values are out of range (as opposed to input not being an integer when program
		}																				//exits without printing a table)
	}
	else
	{
		printf("\nValue out of range, please try again.\n");							//tell user when values are out of range
	}

	return 0;
}