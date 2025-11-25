#include<stdio.h>
#define in 1
#define out 0
int main()
{
	int c;
	int count_word, count_character, count_Newline;
	int state=out;
	count_word = count_character = count_Newline = 0;

	while ((c = getchar()) != EOF)
	{
		++count_character;
		state = in;
		if (c == '\n')++count_Newline;
		if (c == '\n' || c == '\t' || c == '\b' || c == '\\')state = out;
		else
		{
			if (state == in)
			{
				++count_word;
			}
		}
	}

	printf("单词个数为：%d\n字符个数为：%d\n换行个数为：%d", count_word, count_character, count_Newline);
	//输入全部该类型的输入最容易发现错误

	return 0;
}