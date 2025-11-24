#include<stdio.h>
int main()
{
	int c;
	char ch='a';
	int count = 0;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')count=0;
		if (c == ' ')
		{
			++count;
			if (count > 1)c = 0;
		}
		if (count < 0)count = 0;
		putchar(c);
	}

	
	

	return 0;
}