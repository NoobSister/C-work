#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	int a, b, c;
	printf("정수 3개를 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("입력결과 a = %d, b = %d, c = %d\n", a, b, c);
	// ↑ 한 줄에 여러 개 입력 가능, 여러 줄에 결쳐 입력도 가능

	printf("또 정수 3개 입력하기 : ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("입력결과 a = %d, b = %d, c = %d\n", a, b, c);
	// ↑ 한 줄에 여러 개 입력 가능, 여러 줄에 결쳐 입력도 가능

	getchar();
	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}