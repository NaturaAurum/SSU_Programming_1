#include <stdio.h>
#include <stdlib.h>

typedef struct tradeInfo
{
	int code;
	int cost;
	int amount;
}TradeInfo;

typedef struct companyInfo 
{
	int code;
	char compnayName[200];
}CompanyInfo;

typedef int(*PRINTTOP) (TradeInfo*, int);

int PrintTopCost(TradeInfo* tradeInfos, int size)
{
	int maxCost = 0;
	int maxCostIndex = 0;
	for (int i = 0; i < size; ++i)
	{
		int cost = tradeInfos[i].cost;
		if (maxCost < cost)
		{
			maxCost = cost;
			maxCostIndex = i;
		}
	}

	//printf("종목 코드 : %d, 가격 : %d\n", tradeInfos[maxCostIndex].code, tradeInfos[maxCostIndex].cost);
	return maxCostIndex;
}

int PrintTopAmount(TradeInfo* tradeInfos, int size)
{
	int maxAmount = 0;
	int maxAmountIndex = 0;
	for (int i = 0; i < size; ++i)
	{
		int amount = tradeInfos[i].amount;
		if (maxAmount < amount)
		{
			maxAmount = amount;
			maxAmountIndex = i;
		}
	}

	//printf("종목 코드 : %d, 거래량 : %d\n", tradeInfos[maxAmountIndex].code, tradeInfos[maxAmountIndex].amount);
	return maxAmountIndex;
}

void main()
{
	/*FILE* fp;
	fp = fopen("test02.txt", "r+");
	
	fprintf(fp, "%s", "asdf");

	fclose(fp);

	fp = fopen("test02.txt", "r");

	char str[10];
	fseek(fp, 6, SEEK_SET);
	fscanf(fp, "%s", str);

	fclose(fp);
	
	printf("%s", str);*/

	/// 20180720 File
	/// 첫줄은 데이터 갯수
	/// 종목번호, 주가, 거래량
	/// scode File
	/// 첫줄은 데이터 갯수
	/// 회사이름, 종목번호

	FILE* tradeInfoFile = fopen("20180720.txt", "r");
	FILE* companyInfoFile = fopen("scode.txt", "r");
	int tradeInfoSize = 0;
	int companyInfoSize = 0;
	fscanf(tradeInfoFile, "%d", &tradeInfoSize);
	fscanf(companyInfoFile, "%d", &companyInfoSize);
	TradeInfo* tradeInfos = (TradeInfo*)malloc(sizeof(TradeInfo) * tradeInfoSize);
	CompanyInfo* companyInfos = (CompanyInfo*)malloc(sizeof(CompanyInfo) * companyInfoSize);

	for (int i = 0; i < tradeInfoSize; ++i)
	{
		fscanf(tradeInfoFile, "%d %d %d", &tradeInfos[i].code, &tradeInfos[i].cost, &tradeInfos[i].amount);
	}

	for (int i = 0; i < companyInfoSize; ++i)
	{
		fscanf(companyInfoFile, "%s %d", companyInfos[i].compnayName, &companyInfos[i].code);
	}

	PRINTTOP printTop;

	int mode = 0;

	printf("모드를 골라주세요\n1. 주가\n2. 거래량\n");
	scanf("%d", &mode);

	switch (mode)
	{
	case 0:
	case 1:
		printTop = PrintTopCost;
		break;
	case 2:
		printTop = PrintTopAmount;
		break;
	}

	int index = printTop(tradeInfos, tradeInfoSize);

	for (int i = 0; i < companyInfoSize; ++i)
	{
		if (tradeInfos[index].code == companyInfos[i].code)
		{
			printf("종목 코드 : %d, 회사이름 : %s, %s : %d\n", tradeInfos[index].code, companyInfos[i].compnayName, mode == 2 ? "거래량" : "주가", mode == 2 ? tradeInfos[index].amount : tradeInfos[index].cost);
			break;
		}
	}

	fclose(tradeInfoFile);
	fclose(companyInfoFile);
}
