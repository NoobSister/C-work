#include <stdio.h>
#pragma warning(disable:4996)

/*
	0 이상의 정수들이 공백으로 구분되어 반복적으로 주어진다.

	0이 입력되면 반복문을 멈추고 그 전까지 입력받은 수들에 대하여

	홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오.

	입력 예 : 9 7 10 5 33 65 0
*/

int main()
{
	int odd = 0;
	int even = 0;

	while (1)
	{
		int n;
		scanf("%d", &n);

		if (n == 0) {
			break;
		}

		if (n % 2 == 0) {
			even++;
		}
		else odd++;

	}
	printf("odd : %d\n", odd);
	printf("even : %d\n", even);


	//printf("\nENTER 를 누르면 종료합니다\n");
	//getchar();
	return 0;
}