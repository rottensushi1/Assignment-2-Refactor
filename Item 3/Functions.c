#include "Functions.h"

//Taiyo Suzuki
//Sept 30, 2022
//PROG71985F22 - Assignment 2
//Item 3: Ask user to enter a number of days, then convert that value to weeks and days and display results in the following
//format: 18 days are 2 weeks, 4 days. Use a while loop to allow the user to repeatedly enter day values; terminate the loop
//when the user enters a nonpositive value, such as 0 or -20.

//definitions
#define DAYS_IN_WEEK 7

void PrintFormattedWeeks(int* days, int* weeks, int* remainder)
{
	*weeks = *days / DAYS_IN_WEEK;											//calculate weeks from days (divide)

	*remainder = *days % DAYS_IN_WEEK;										//calculate remainder from division (modulus operator %)

	printf("\n%d days are %d weeks, %d days\n", *days, *weeks, *remainder);	//print output
}

void TimeToExit(int* days)
{
	if (*days <= 0)															//exit program if input is nonpositive value
	{
		printf("\nExiting.\n");
		exit(1);
	}
}