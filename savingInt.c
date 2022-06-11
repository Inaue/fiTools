/**
 * @file   savingInt.c
 * @brief  APPLICATION THAT CALCULATES THE AMOUNT OF MONEY AFTER SAVING AND GETTING INTEREST
 * @author Inaue Ferreira da Silva
 * @date   06-11-2022
 */

/*  HEADER  */
#include <stdio.h>

/*  ERROR CODES */
#define EXIT_SUCCESS     0

/*  CONSTANTS  */
#define TRUE		(1 == 1)
#define FALSE		!TRUE
#define MONTHS_PER_YEAR	12

/*  FUNCTIONS   */
/*  *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   */

int	main	(int argc, char** argv);

/*  *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   */

/**
 * @brief MAIN FUNCTION
 *
 * @param argc AMOUNT OF ARGUMENTS
 * @param argv ARGUMENTS
 * @return int ERROR CODE
 */
int main(int argc, char** argv)
{
	unsigned long int monthlyApp, amount;
	unsigned char interestRate, y, years;

	printf("Type the starting capital (without cents):\n");
	scanf("%lu", &amount);

	printf("Type the monthly application (without cents):\n");
	scanf("%lu", &monthlyApp);

	printf("Type the interest rate per year (integer):\n");
	scanf("%hhu", &interestRate);

	printf("Type for how long you want to save (years):\n");
	scanf("%hhu", &years);

	for (y = 0; y < years; y++)
		amount = ((amount + (monthlyApp * MONTHS_PER_YEAR)) * (100 + interestRate)) / 100;

	printf("The amount is $ %lu\n", amount);

	return EXIT_SUCCESS;
}
