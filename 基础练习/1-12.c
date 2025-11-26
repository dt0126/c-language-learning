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

	

	int MaxQuency = 0;
	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (MaxQuency >= WordQuency[i])MaxQuency = MaxQuency;
		else MaxQuency = WordQuency[i];
	}

	for (int i = 0; i < MAX_SIZE; i++)
	{
		WordQuency[i] = WordQuency[i] - MaxQuency;
	}
	int temp_MaxQuency = MaxQuency;
	int temp_y = MaxQuency;


	
	system("cls");
	printf("开始绘制直方图：\n");
	
	for (int i = 0; i < MAX_SIZE+2; i++)
	{
		int y = MaxQuency;
		if (i == 0)printf(" |");
		else if (i == MAX_SIZE + 1)printf("|\n");
		else printf("-----");
		
	}
	
	while (temp_MaxQuency > 0)
	{
		for (int i = 0; i < MAX_SIZE + 2; i++)
		{
			
			if (i == 0)printf("%d|",temp_y);
			else if (i == MAX_SIZE + 1)
			{
				printf("                        |\n");
				temp_y--;
			}
			else if (i < MAX_SIZE)
			{
				if (WordQuency[i] >= 0&&WordQuency[i]<MaxQuency)
				{
					printf(" ※  ");
				}
				else if (WordQuency[i] < 0)printf("    ");
				WordQuency[i]++;
			}
			
		}
		temp_MaxQuency--;
	}
	
	for (int i = 0; i < MAX_SIZE + 2; i++)
	{
		int y = MaxQuency;
		if (i == 0)printf(" |");
		else if (i == MAX_SIZE + 1)printf("|\n");
		else printf("-----");

	}
	for (int i = 0; i < MAX_SIZE; i++)
	{
		printf("   %d", i + 1);
	}


	return 0;
}