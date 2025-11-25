#include<stdio.h>
int main()
{
	int c;
	
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			c = 0;
			printf("\\t");
		}
		
		if (c == '\b')
		{
			c = 0;
			printf("\\b");
		}

		if (c == '\\')
		{
			c = 0;
			printf("\\\\");
		}

		putchar(c);
	}

	
	

	return 0;
}