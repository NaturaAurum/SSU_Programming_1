#include <stdio.h>

typedef int(*PCOMP)(int, int);
typedef void(*PSORTFUNC)(int*, int, PCOMP);

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int UpSort(int a, int b)
{
	return (a > b) ? 1 : 0;
}

int DownSort(int a, int b)
{
	return (a < b) ? 1 : 0;
}

void SelectionSort(int* arr, int size, PCOMP compFunc)
{
	int temp;
	for (int i = 0; i < size - 1; ++i)
	{
		temp = i;
		for(int j = i + 1; j < size; ++j)
		{
			/*if (arr[temp] > arr[j])
			{
				temp = j;
			}*/
			if (compFunc(arr[temp], arr[j]))
			{
				temp = j;
			}
		}
		Swap(&arr[i], &arr[temp]);
	}
}

void InsertSort(int *arr, int size, PCOMP compFunc)
{
	for (int i = 1; i < size; ++i)
	{
		int j = i;
		/*while (j != 0 && arr[j] < arr[j - 1])
		{
			Swap(&arr[j], &arr[j - 1]);
			--j;
		}*/

		while (j != 0 && compFunc(arr[j - 1], arr[j]))
		{
			Swap(&arr[j], &arr[j - 1]);
			--j;
		}
	}
}

void BubbleSort(int *arr, int size, PCOMP compFunc)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (compFunc(arr[j], arr[i]))
			{
				Swap(&arr[i], &arr[j]);
			}
		}
	}
}

void main()
{
	int numbers[] = { 1,3,5,7,9,10,8,6,4,2 };
	int size = sizeof(numbers) / sizeof(numbers[0]);

	PSORTFUNC sf[3] = { InsertSort, SelectionSort, BubbleSort };
	PCOMP comp[2] = { UpSort, DownSort };

	int funcSelect = 0;
	int compSelect = 0;

	
	printf("데이터 셋 : ");
	for (int i = 0; i < size; ++i) {
		printf("%d ", numbers[i]);
	}
	printf("\n");

	printf("정렬 함수 선택 0. 삽입, 1. 선택, 2. 버블 : ");
	scanf("%d", &funcSelect);

	printf("정렬 방법 선택 0. 오름차순, 1. 내림차순 : ");
	scanf("%d", &compSelect);

	sf[funcSelect](numbers, size, comp[compSelect]);

	for (int i = 0; i < size; ++i) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
}
