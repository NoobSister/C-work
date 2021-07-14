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

	//printf("\nENTER 를 누르면 종료합니다\n");
	//getchar();
	return 0;
}