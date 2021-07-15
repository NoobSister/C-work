#include <stdio.h>
#pragma warning(disable:4996)

/*
자연수를 입력받아 아래와 같은 사각형을 출력하는 프로그램을 작성하시오.

주어지는 수는 100이하의 자연수이다.

(함수를 작성하시오.)
 
 입력 예					출력 예
	3					1 2 3
						2 4 6
						3 6 9
*/


void drawSquare(int); // 선언

int main()
{
	int n;
	scanf("%d", &n);
	drawSquare(n); // 호출
	getchar();
	

	//printf("\nENTER 를 누르면 종료합니다\n");
	//getchar();
	return 0;
}

void drawSquare(int n)  // 정의
{
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", i + j * i);
		}
		printf("\n");
	}
}