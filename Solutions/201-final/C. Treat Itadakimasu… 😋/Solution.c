#include <stdio.h>

int main()
{
	unsigned int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	scanf("%u %u %u %u", &num1, &num2, &num3, &num4);

	const unsigned int last_two_digits = 
		(num1 % 100) *
		(num2 % 100) *
		(num3 % 100) *
		(num4 % 100) %
		100;
	
	unsigned int level = 0;
	if (00 <= last_two_digits && last_two_digits <= 24)
		level = 0;
	else if (25 <= last_two_digits && last_two_digits <= 49)
		level = 1;
	else if (50 <= last_two_digits && last_two_digits <= 74)
		level = 2;
	else if (75 <= last_two_digits && last_two_digits <= 99)
		level = 3;

	printf("level %d\n", level);

	return 0;
}
