#include <stdio.h>
#pragma warning(disable:4996)
/*
ȣ���̳� �б��� 6�г��� �� ���� �ִµ� �� ���� ��ǥ�� �� �� �����Ͽ� �������� ������ �Ͽ���.

�ݺ��� �� ���� ���⸦ �� ������ �Է¹޾� �� �ݺ��� ���⸦ �� ������ �հ踦 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

(�ݵ�� �迭�� �̿��ϰ� �Է��Ŀ� ����ϴ� ������� �ϼ���.)
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
	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}