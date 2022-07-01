#include<stdio.h>
int main(void)
{
	char ch=0;
	printf("select command > ");
	scanf_s("%c",&ch);
	if ('h' == ch )
	{
		printf("n:newitem\n");
		printf("l:list items\n");
		printf("a:sort by asc\n");
		printf("d:soft by desc\n");
		ch = NULL;
		printf("select command > ");
		scanf_s(" %c", &ch);
	}
	return 0;
}