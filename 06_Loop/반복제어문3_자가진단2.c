#include <stdio.h>
#pragma warning(disable:4996)

/*
	�ڿ��� n�� �Է¹޾Ƽ� n�ٸ�ŭ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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
	//printf("\nENTER �� ������ �����մϴ�\n");
	//getchar();
	return 0;
}