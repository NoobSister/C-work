#include <stdio.h>
#pragma warning(disable:4996)

/*
자연수 N을 입력받아 1부터 N까지 출력을 하되
n-1번째 값은 n번째 값을 2로 나눈 몫이 되도록 하는 프로그램을 작성하시오.
*/

void func1(int n)
{
	if (n < 1) return;  // 종료 조건

	func1(n / 2);  // 재귀 호출
	printf("%d", n);
}

int main()
{
	int n;
	scanf("%d", &n);

	func1(n); // 호출

	//getchar();
	//printf("\nENTER 를 누르면 종료합니다\n");
	//getchar();
	return 0;
}