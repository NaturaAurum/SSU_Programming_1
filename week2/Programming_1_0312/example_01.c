#include <stdio.h>

int main()
{
	int input01, input02, input03, input04;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &input01);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &input02);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &input03);
	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &input04);

	int sum = input01 + input02 + input03 + input04;

	printf("%d + %d + %d + %d = %d\n", input01, input02, input03, input04, sum);
}