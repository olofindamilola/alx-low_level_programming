#include <stdlib.h>

#include <time.h>

/**
 * main - determine if the number is positive or negative
 * Description: program will assign a random number to the variable n each time
 * it is executed
 * return: always 0 (sucess)
 */



int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				if (n == 0)
					printf("%d is zero\n", n)
				else if (n < 0)
					printf("%d is negative\n", n)
				else
					printf("%d is negative\n", n)
				else
					printf("%d is positive\n", n)

					return (0);

}
