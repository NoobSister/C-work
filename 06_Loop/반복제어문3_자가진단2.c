#include <stdio.h>
#pragma warning(disable:4996)

/*
	자연수 n을 입력받아서 n줄만큼 다음과 같이 출력하는 프로그램을 작성하시오.

	5					*
						**
						***
						****
						*****
*/

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	//getchar();
	//printf("\nENTER 를 누르면 종료합니다\n");
	//getchar();
	return 0;
}