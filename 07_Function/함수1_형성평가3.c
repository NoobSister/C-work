#include <stdio.h>
#pragma warning(disable:4996)

/*
�ڿ����� �Է¹޾� �Ʒ��� ���� �簢���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�־����� ���� 100������ �ڿ����̴�.

(�Լ��� �ۼ��Ͻÿ�.)
 
 �Է� ��					��� ��
	3					1 2 3
						2 4 6
						3 6 9
*/


void drawSquare(int); // ����

int main()
{
	int n;
	scanf("%d", &n);
	drawSquare(n); // ȣ��
	getchar();
	

	//printf("\nENTER �� ������ �����մϴ�\n");
	//getchar();
	return 0;
}

void drawSquare(int n)  // ����
{
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", i + j * i);
		}
		printf("\n");
	}
}