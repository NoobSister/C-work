#include <stdio.h>
#pragma warning(disable:4996)

/*
�ڿ��� N�� �Է¹޾� 1���� N���� ����� �ϵ�
n-1��° ���� n��° ���� 2�� ���� ���� �ǵ��� �ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

void func1(int n)
{
	if (n < 1) return;  // ���� ����

	func1(n / 2);  // ��� ȣ��
	printf("%d", n);
}

int main()
{
	int n;
	scanf("%d", &n);

	func1(n); // ȣ��

	//getchar();
	//printf("\nENTER �� ������ �����մϴ�\n");
	//getchar();
	return 0;
}