#include <stdio.h>
#pragma warning(disable:4996)
/*

*/

int main()
{
	int a;
	int b;

	scanf("%d %d", &a, &b);

	if (a > b) {
		printf("%d", a - b);
	}
	else
		printf("%d", b - a);

	//printf("\nENTER �� ������ �����մϴ�\n");
	//getchar();
	return 0;
}