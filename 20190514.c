#include <stdio.h>

int gcd(int x, int y)
{
	for (int i = x % y; i > 0; i = x % y)
	{
		x = y;
		y = i;
	}

	return y;
}

int gcd_recursive(int x, int y)
{
	if (x % y == 0)
	{
		return y;
	}
	return gcd_recursive(y, x % y);
}

void add10(int *x)
{
	*x += 10;
}

void Swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

typedef int(*PTRF)(int, int);

//void test_ptr(int(*pf)(int, int))
//{
//	printf("%d\n", pf(10, 20));
//}

//void test_ptr(int(*pf)(int, int), int x, int y)
//{
//	printf("%d\n", pf(x, y));
//}

void test_ptr(PTRF pf, int x, int y)
{
	printf("%d\n", pf(x, y));
}

void main()
{
	//int x = 4, y = 8;

	/*for (int i = x % y; i > 0; i = x % y)
	{
		x = y;
		y = i;
	}

	printf("%d\n", y);*/

	/*printf("%d\n", gcd(x, y));
	printf("%d\n", gcd_recursive(x, y));*/

	/*int m = 13;

	add10(&m);

	printf("%d\n", m);*/

	int a = 20, b = 45, sel = 0;

	/*Swap(&a, &b);

	printf("%d, %d", a, b);*/

	/*int(*p)(int, int);*/

	//PTRF pf;

	/*PTRF pfs[4] = NULL;

	pfs[0] = add;*/

	PTRF pfs[4] = { add, sub, mul, div };

	scanf("%d", &sel);

	/*if (sel == 0)
	{
		pf = add;
	}
	else if (sel == 1)
	{
		pf = sub;
	}
	else if (sel == 2)
	{
		pf = mul;
	}
	else if (sel == 3)
	{
		pf = div;
	}*/

	//printf("%d\n", pf(a, b));
	printf("%d\n", pfs[sel](a, b));

	/*test_ptr(add);
	test_ptr(sub);
	test_ptr(div);
	test_ptr(mul);*/

	test_ptr(add, 1, 5);
}
