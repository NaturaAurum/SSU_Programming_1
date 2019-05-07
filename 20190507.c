#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Display()
{
	int num = 5;
	printf("%d\n", num);
}

void hi()
{
	printf("hello\n");
	return;
}

void PrintSum(int number)
{
	int result = 0;
	while (number > 0)
	{
		result += number;
		printf("%d ", number);
		number--;
	}

	printf(" = %d\n", result);
}

int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}

	return n * fact(n - 1);
}

int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}

	return result;
}

int LottoRandom()
{
	int temp = 0;

	srand((unsigned)time(NULL));

	temp = rand() % 45 + 1;

	return temp;
}

void main()
{
	/*int num = 5;

	printf("%d\n", num);*/
	//PrintSum(5);
	//printf("%d", factorial(5));

	int i = 0;
	int lottoNumbers[6] = { 0, };
	while (i < 6)
	{
		lottoNumbers[i] = LottoRandom();
		for (int j = 0; j < i; ++j)
		{
			if (lottoNumbers[j] == lottoNumbers[i])
			{
				--i;
			}
		}

		++i;
	}

	for (int i = 0; i < 6; ++i)
	{
		printf("%d ", lottoNumbers[i]);
	}
	printf("\n");
}
