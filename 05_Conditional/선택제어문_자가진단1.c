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

	//printf("\nENTER 를 누르면 종료합니다\n");
	//getchar();
	return 0;
}