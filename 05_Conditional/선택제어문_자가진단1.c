#include <stdio.h>
#pragma warning(disable:4996)
/*

*/

int main()
{
	int num;
	
	scanf("%d", &num);

	if (num < 0) {
		printf("%d\n", num);
		printf("minus");
	}
	else {
		printf("%d", num);
	}

	//printf("\nENTER �� ������ �����մϴ�\n");
	//getchar();
	return 0;
}