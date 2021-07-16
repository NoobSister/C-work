#include <stdio.h>
#pragma warning(disable:4996)
/*
호석이네 학교는 6학년이 네 반이 있는데 각 반의 대표를 세 명씩 선발하여 제기차기 시합을 하였다.

반별로 세 명이 제기를 찬 개수를 입력받아 각 반별로 제기를 찬 개수의 합계를 출력하는 프로그램을 작성하시오.

(반드시 배열을 이용하고 입력후에 출력하는 방식으로 하세요.)
*/

//#define CLS 4
//#define STU 3

int main()
{
	//int score[CLS][STU];
	//for (int i = 1; i <= CLS; i++) {
	//	printf("%dclass? ", i);
	//	for (int j = 0; j < STU; j++) {
	//		scanf("%d", &score[i][j]);
	//	}
	//}

	//for (int i = 1; i < CLS; i++) {
	//	int sum = 0;
	//	for (int j = 0; j < STU; j++) {
	//		sum += score[i][j];
	//	}
	//	printf("%d class", i);
	//}

	int arr[4][3] = { 0 };
	int sum[4] = { 0 };

	for (int row = 0; row < 4; row++) {
		printf("%dclass? ", row + 1);
		for (int col = 0; col < 3; col++) {
			scanf("%d", &arr[row][col]);
			sum[row] += arr[row][col];
		}
	}

	for (int row = 0; row < 4; row++) {
		printf("%dclass : %d\n", (row + 1), sum[row]);
	}


	getchar();
	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}