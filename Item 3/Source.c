#include <stdio.h>
#include <math.h>

//Taiyo Suzuki
//Sept 30, 2022
//PROG71985F22 - Assignment 2
//Item 3: Ask user to enter a number of days, then convert that value to weeks and days and display results in the following
//format: 18 days are 2 weeks, 4 days. Use a while loop to allow the user to repeatedly enter day values; terminate the loop
//when the user enters a nonpositive value, such as 0 or -20.

//definitions
#define DAYS_IN_WEEK 7

int main(void)
{
	int dayInput = 1;																					//user input variable intialized as positive value for while loop to function
	int weeks, daysRemain;

	printf("Enter a number of days. Enter a nonpositive value such as 0 or -1 to end program.\n");		//print program instructions

	while (dayInput > 0)
	{
		printf("\nDays: ");																				//ask for user input

		if (scanf_s("%d", &dayInput) == 0)																//scan for user input and check if it is an integer, and if it is, save it
		{
			printf("\nInput not recognised as an integer, please try again.\n");						//if it is not an integer, exit the program
			exit(1);
		}

		if (dayInput <= 0)																				//exit program if input is nonpositive value
		{
			printf("\nExiting.\n");
			exit(1);
		}

		weeks = dayInput / DAYS_IN_WEEK;																//calculate weeks from days (divide)

		daysRemain = dayInput % DAYS_IN_WEEK;															//calculate remainder from division (modulus operator %)

		printf("\n%d days are %d weeks, %d days\n", dayInput, weeks, daysRemain);						//print output
	}

	printf("\nExiting.\n");
	return 0;
}