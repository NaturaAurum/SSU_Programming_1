#include <stdio.h>

int main()
{
	int input01, input02, input03, input04;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &input01);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &input02);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &input03);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &input04);

	int sum = input01 + input02 + input03 + input04;

	printf("%d + %d + %d + %d = %d\n", input01, input02, input03, input04, sum);
}