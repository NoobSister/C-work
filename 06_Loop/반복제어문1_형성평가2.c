#include <stdio.h>
#pragma warning(disable:4996)

/*
	0 �̻��� �������� �������� ���еǾ� �ݺ������� �־�����.

	0�� �ԷµǸ� �ݺ����� ���߰� �� ������ �Է¹��� ���鿡 ���Ͽ�

	Ȧ���� ������ ¦���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է� �� : 9 7 10 5 33 65 0
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


	//printf("\nENTER �� ������ �����մϴ�\n");
	//getchar();
	return 0;
}