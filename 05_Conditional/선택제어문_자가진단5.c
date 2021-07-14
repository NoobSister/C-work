#include <stdio.h>
#pragma warning(disable:4996)
/*

*/

int main()
{
	float num1;
	float num2;

	scanf("%f %f", &num1, &num2);

	if (num1, num2 >= 4.0) {
		printf("A");
	}
	else if (num1, num2 >= 3.0) {
		printf("B");
	}
	else {
		printf("C");
	}

	//printf("\nENTER 를 누르면 종료합니다\n");
	//getchar();
	return 0;
}