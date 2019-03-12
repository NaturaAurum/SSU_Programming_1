#include <stdio.h>

int main()
{
	int num = 15;
	float fNum = 3.5;
	char ch = 'k';

	//scanf("%d", &num);

	printf("%08d\n", num);
	printf("%9.1f\n", fNum);
	printf("%8c\n", ch);

	return 0;
}