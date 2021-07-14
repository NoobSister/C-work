#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	int age;

	scanf("%d", &age);

	if (age >= 20)
		printf("adult");

	else
		printf("%d years later", 20 - age);

	/*printf("\nENTER 를 누르면 종료합니다\n");
	getchar();*/
	return 0;
}