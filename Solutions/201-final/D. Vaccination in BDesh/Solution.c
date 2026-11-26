#include <stdio.h>

int main()
{
	int test_cases = 0;
	scanf("%d", &test_cases);

	for (size_t i = 0; i < test_cases; i++)
	{
		int day = 0;
		int multiples = 0;
		scanf("%d %d", &day, &multiples);

		int unvaccinated = 0;

		while (day--)
		{
			int people_count = 0;
			scanf("%d", &people_count);
			unvaccinated += people_count % multiples;
		}

		printf("Case %zu: %d\n", i + 1, unvaccinated);
	}

	return 0;
}
