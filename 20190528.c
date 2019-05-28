#include <stdio.h>
#include <string.h>

void main()
{
	//FILE* fp = fopen("tmp.txt", "wb");

	////fprintf(fp, "%d", 20);
	///*int test = 20;
	//fwrite(&test, sizeof(test), 1, fp);*/
	////fputc, fpus
	//char c = 'A';
	//char s[20] = "Test";

	//scanf("%s", s);

	////fputc(c, fp);
	//fputs(s, fp);
	//fclose(fp);

	//fp = fopen("tmp.txt", "r");

	///*int d = 0;
	//fscanf(fp, "%d", &d);*/
	////fgetc, fgets
	///*printf("%d", d);*/

	///*c = fgetc(fp);
	//fgets(s, 20, fp);
	//printf("%c\n", c);
	//printf("%s\n", s);*/

	//char data;

	///*data = fgetc(fp);
	//printf("%c\n", data);
	//data = fgetc(fp);
	//printf("%c\n", data);
	//data = fgetc(fp);
	//printf("%c\n", data);
	//data = fgetc(fp);
	//printf("%c\n", data);
	//data = fgetc(fp);
	//printf("%c\n", data);*/

	//while ((data = fgetc(fp)) != EOF)
	//{
	//	printf("%c\n", data);
	//}
	//fclose(fp);

	/*char s[30] = "";
	gets(s);

	int length = strlen(s);

	for (int i = 0; i < length / 2; ++i)
	{
		char tmp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = tmp;
	}
	FILE* fp = fopen("test.txt", "w");
	fputs(s, fp);
	fclose(fp);

	fp = fopen("test.txt", "r");

	fgets(s, length, fp);

	for (int i = 0; i < length / 2; ++i)
	{
		char tmp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = tmp;
	}

	printf("%s", s);

	fclose(fp);*/

	/*FILE* fp;
	char name[10][20];
	int grade[10];

	fp = fopen("test01.txt", "r");

	for (int i = 0; i < 4; ++i)
	{
		fscanf(fp, "%s %d", name[i], &grade[i]);
	}

	for (int i = 0; i < 4; ++i)
	{
		printf("%s : %d\n", name[i], grade[i]);
	}

	int total = 0;
	int avg = 0;

	for (int i = 0; i < 4; ++i)
	{
		total += grade[i];
	}

	avg = total / 4;

	printf("Total : %d\navg : %d\n", total, avg);*/

	FILE* fp;
	char name[10][20];
	int grade[10];

	char data[10][30];

	fp = fopen("test01.txt", "r");
	/*fseek(fp, 2, SEEK_SET);
	fscanf(fp, "%s", name[0]);
	fseek(fp, 2, SEEK_CUR);
	SEEK_END
	fscanf(fp, "%s", name[1]);

	printf("%s : %s", name[0], name[1]);*/

	int line = 0;
	while (!feof(fp))
	{
		fgets(data[line], 30, fp);
		line++;
	}

	for (int i = 0; i < line; ++i)
	{
		printf("%s\n", data[i]);
	}
}
