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

	/*printf("\nENTER �� ������ �����մϴ�\n");
	getchar();*/
	return 0;
}