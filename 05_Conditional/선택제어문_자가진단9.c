#include <stdio.h>
#pragma warning(disable:4996)
/*

*/

int main()
{
	int a;
	int b;
	int c;
	int min;

	scanf("%d %d %d", &a, &b, &c);

	min = (a < b) ? a : b;
	min = (min < c) ? min : c;

	printf("%d", min);

	//printf("\nENTER �� ������ �����մϴ�\n");
	//getchar();
	return 0;
}