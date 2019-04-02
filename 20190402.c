#include <stdio.h>
void main()
{
	// 1 ~ 9단 출력
	/*for (int i = 2; i <= 9; ++i)
	{
		printf("%d단\n", i);
		for (int j = 1; j <= 9; ++j)
		{
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}*/

	// 입력한 단 출력
	/*printf("원하는 단 : ");
	int number = 0;
	scanf("%d", &number);
	printf("%d단\n", number);
	for (int i = 1; i <= 9; ++i)
	{
		printf("%d x %d = %d\n", number, i, number * i);
	}*/

	// while

	/*int i = 2, j = 1;

	while (i < 10)
	{
		if (j == 1)
		{
			printf("%d단\n", i);
		}
		printf("%d x %d = %d\n", i, j, i * j);
		++j;
		if (j == 10)
		{
			++i;
			j = 1;
		}
	}*/

	// 정수 - 약수 찾기
	// 6 -> 1 2 3 6

	/*int targetNumber = 0;
	scanf("%d", &targetNumber);

	for (int i = 1; i <= targetNumber; ++i)
	{
		if (targetNumber % i == 0) {
			printf("%d ", i);
		}
	}*/

	// 최소 공배수 -> 두 수로 나누었을 때 나누어 떨어지는 수 중 제일 작은 수
	// 16 32 -> 16 

	/*int startNumber = 0;
	int endNumber = 0;

	scanf("%d %d", &startNumber, &endNumber);

	for (int i = 1; i <= (startNumber * endNumber); ++i) {
		if (i % startNumber == 0 && i % endNumber == 0) {
			printf("%d", i);
			break;
		}
	}*/

	// 최대 공약수 -> 두 수를 나눌 수 있는 약수 중 제일 큰 수
	// 6 8 -> 2
	// 16 20 -> 4

	//int startNumber = 0;
	//int endNumber = 0;

	//scanf("%d", &startNumber);
	//scanf("%d", &endNumber);

	//int max = 0;

	//for (int i = 1; i <= startNumber; ++i) {
	//	if (startNumber % i == 0 && endNumber % i == 0 && i > max)
	//	{
	//		max = i;
	//	}
	//}

	//// 1. 거꾸로 돌려서 처음 찾은 수에서 break
	//// 2. 유클리드 호제법

	///*for (max = endNumber % startNumber; max > 0; max = endNumber % startNumber)
	//{
	//	endNumber = startNumber;
	//	startNumber = max;
	//}
	//printf("%d", startNumber);*/


	//printf("%d\n", max);

	// 소수 찾기
	// 1 ~ 1000 소수 몇개? 소수는? 제일 큰 소수는?
	// 1 or 자기 자신만 약수
	/*for (int i = 1; i <= 1000; ++i)
	{
		for (int x = 2; x <= i; ++x) {
			if (i % x == 0) {
				if (i == x)
				{
					printf("%d ", i);
				}
				break;
			}
		}
	}*/

	// goto

	int i;

input:
	printf("입력하세요 ( 1 ~ 9 ): ");
	scanf("%d", &i);

	if (i < 1 || i > 9)
	{
		goto input;
	}
}
