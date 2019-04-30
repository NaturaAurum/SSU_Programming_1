#include <stdio.h>
#include <stdlib.h>

void main() 
{
	int a = 5;
	int *ptr = NULL;

	int count = 0;
	printf("Count : ");
	scanf("%d", &count);

	ptr = (int*)malloc(sizeof(int) * count);
	printf("malloc\n");
	for (int i = 0; i < count; ++i)
	{
		printf("%d\n", ptr[i]);
	}

	ptr = (int*)calloc(count, sizeof(int));
	printf("calloc\n");
	for (int i = 0; i < count; ++i)
	{
		printf("%d\n", ptr[i]);
	}

	ptr = (int*)realloc(ptr, sizeof(int) * count * 3);
	printf("realloc\n");
	for (int i = 0; i < count * 3; ++i)
	{
		printf("%d\n", ptr[i]);
	}

	/*for (int i = 0; i < count; ++i)
	{
		scanf("%d", &ptr[i]);
	}

	for (int i = 0; i < count; ++i)
	{
		printf("%d ", *(ptr + i));
	}*/

	free(ptr);
	ptr = NULL;
}
