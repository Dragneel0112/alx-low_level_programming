#include <stdio.h>

/**
 * main -lists natural numbers
 *
 * Return: 0 always success
 */
int main(void)
{
	unsigned long int sumx, sumy sum;
	int n;

	sumx = 0;
	sumy = 0;
	sum = 0;

	for (n = 0; n < 1024; ++n)
	{
		if ((n % 3) == 0)
		{
			sumx = sumx + n;
		} else if ((n % 5) == 0)
		{
			sumy = sumy + n;
		}
	}
	sum = sumx + sumy;
	printf("%lu\n", sum);
	return (0);
}

