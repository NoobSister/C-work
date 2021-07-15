#include <stdio.h>
#pragma warning(disable:4996)
/*

*/

int main()
{
	int n;
	scanf("%d", &n);

	// 증가 방향
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 감소 방향
	for (int i = n; i > 1; i--) {
		for (int j = 0; j < i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}




	//printf("\nENTER 를 누르면 종료합니다\n");
	//getchar();
	return 0;
}