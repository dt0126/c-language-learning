#include<stdio.h>

#define MAX_SIZE 20

int main()
{
	int c;
	int WordQuency[MAX_SIZE] = { 0 };
	int count_WordQuency=0;
	int count_WordSize = 0;

	while ((c = getchar()) != EOF)
	{
	
		if (c == '\n' || c == ' ' || c == "\t")
		{
			WordQuency[count_WordSize]++;

			count_WordSize = 0;
	
		}
		else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			count_WordSize++;
		}
		
	}
	printf("开始绘制直方图：");
	system("cls");

	for (int i = 0; i < MAX_SIZE; i++)
	{
		printf("长度为的%2d单词出现次数的直方图：", i+1);
		while (WordQuency[i] > 0)
		{
			printf("※");
			WordQuency[i]--;
		}
		printf("\n");
	}
	
	return 0;
}