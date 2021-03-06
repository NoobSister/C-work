#include <stdio.h>

int main()
{
	// 구구단 2단 출력
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ..
	// 2 x 9 = 18

	//int i = 2;
	//int j;
	//int a;

	//for (j = 1, a = 2; j < 9; j++, a += 2)
	//{
	//	printf("%d x %d = %d\n", i, j, a);
	//}

	int i;
	for (i = 1; i <= 9; i++)
	{
		printf("2 x %d = %d\n", i, i * 2);
	}

	printf("-- 순환문 + 조건문 --\n");
	// 1 ~ 10 중 홀수만 음수로 바꾸어 출력하기
	// -1 2 -3 4 -5 6 -7 8 -9 10
	
	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			printf("%d ", i);
		else
			printf("%d ", -i);
	}
	printf("\n");

	// 구구단 2단에서 x 짝수만 출력하기
	for (i = 1; i <= 9; i++)
	{
		if (i % 2 == 0)
			printf("2 x %d = %d\n", i, i * 2);
	}

	printf("---\n");
	for (i = 2; i <= 9; i += 2)
	{
		printf("2 x %d = %d\n", i, i * 2);
	}

	// 1 ~ n 까지의 수를 합산.
	{
		int n = 100;
		int sum = 0;
		for (i = 1; i <= n; i++) {
			sum += i;  // 누적합산
		}
		printf("sum = %d\n", sum);
	}



	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}