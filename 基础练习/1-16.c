#include<stdio.h>

#define MAX_SIZE 1000

int getline(char s[], int lim);
void copy_line(char s1[], char s2[]);
void is_lengest();

int main()
{
	int c = 0;
	int index = 0;
	char all[MAX_SIZE] = { 0 };
	while ((c = getchar()) != EOF)
	{
		all[index] = c;
		index++;
	}
	printf("%s", all);

	return 0;
}
int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
	{
		s[i] = c;
	}
	if (c == '\n')
	{
		s[i] = '\n';
		i++;
	}
	s[i] = '\0';
	return i;
}

void copy_line(char s1[], char s2[])
{

	int i = 0;
	while ((s1[i] = s2[i]) != 0)
		i++;
}
void is_lengest()
{
	int now_len = 0;
	int max_len = 0;
	char now_line[MAX_SIZE];
	char longest_line[MAX_SIZE];
	while ((now_len = getline(now_line, MAX_SIZE)) > 0)
	{

		if (now_len > max_len)
		{
			max_len = now_len;
			copy_line(longest_line, now_line);

		}


	}
	if (max_len > 0)printf("%s", longest_line);

}