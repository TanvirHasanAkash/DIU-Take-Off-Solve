#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	scanf("%d %d %d", &num1, &num2, &num3);

	int odd_count = 0;

	if (num1 % 2 == 1)
		odd_count++;

	if (num2 % 2 == 1)
		odd_count++;

	if (num3 % 2 == 1)
		odd_count++;

	if (odd_count == 1 || odd_count == 2)
		printf("3 Kimonos for Nezuko\n");
	else
		printf("You have to choose two\n");

	return 0;
}
