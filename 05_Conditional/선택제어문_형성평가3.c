#include <stdio.h>
#pragma warning(disable:4996)
/*

*/

int main()
{
	int year;

	scanf("%d", &year);

	if (year % 400 == 0)
		printf("leap year");
	else if (year % 4 == 0 && year % 100 != 0)
		printf("leap year");
	else
		printf("common year");

	//printf("\nENTER �� ������ �����մϴ�\n");
	//getchar();
	return 0;
}