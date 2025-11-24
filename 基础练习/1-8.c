#include<stdio.h>
int main()
{
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int c;
	while ((c = getchar()) != EOF)
	{
		
		
			
				if (c == '\n')++count1;
			
			
				if (c ==' ')++count2;
			
		
				if(c=='\t')++count3;
				
		
	}

	
	printf("空格个数为:%d\t制表符个数为：%d\t换行符个数为：%d\t", count2, count3, count1);

	return 0;
}