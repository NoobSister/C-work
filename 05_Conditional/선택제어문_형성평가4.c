#include <stdio.h>
#pragma warning(disable:4996)
/*

*/

int main()
{
	int a;

	printf("Number? ");
	scanf("%d", &a);

	if (a == 1)
		printf("dog");
	else if (a == 2)
		printf("cat");
	else if (a == 3)
		printf("chick");
	else
		printf("I don't know.");


	//printf("\nENTER �� ������ �����մϴ�\n");
	//getchar();
	return 0;
}