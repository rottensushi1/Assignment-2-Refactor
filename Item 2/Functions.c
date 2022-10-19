#include "Functions.h"

//Taiyo Suzuki
//Sept 30, 2022
//PROG71985F22 - Assignment 2
//Item 2: Using a for loop, print a table using ASCII (printable) characters with each line giving an integer, its square root,
//its square and its cube. Ask the user to enter a lower and upper limit for the table, but limit input to stay between 0 and 50.

void PrintOutput(int* lowerLimit, int* upperLimit)
{
	printf("------------------------------\n");
	printf("  x | sqrt(x) |  x^2 |    x^3\n");								//print top of table

	for (int i = *lowerLimit; i <= *upperLimit; i++)						//caculate and print output with lines for table in between
	{
		double iDouble = i, iSquareRoot = sqrt(iDouble);
		int iSquare = i * i, iCube = pow(i, 3);

		printf("------------------------------\n");
		printf("%3d | %.5f | %4d | %6d\n", i, iSquareRoot, iSquare, iCube);	//format output
	}

	printf("------------------------------\n");								//print bottom of table
	printf("  x | sqrt(x) |  x^2 |    x^3\n");
	printf("------------------------------\n");
}