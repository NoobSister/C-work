#include <stdio.h>
// ���� (Variable) 
// ���α׷����� �����͸� ��� ���� ����
// �� ������ '�̸�' �� �ٿ��� ����.  �� �̸��� ������(variable name) �̶� ��.

// ������ ����ϱ� ���� �ݵ�� ����(declaration) �ؾ� ��.
// ���� ���� ����
//    [���� Ÿ��]  [������];

// ������ '���'�ϱ� ���� �ݵ�� �ʱ�ȭ (initialization) �ؾ� ��.
// �ʱ�ȭ �� '����' �� ���� ����(assign)�ϴ� ��

// Ư�� ����(block) �ȿ��� ������ ������ ��������(local variable) �̶� ��

int main()
{
	printf("����(variable)\n");

	int a;  // int  Ÿ���� ���� a ����.  int Ÿ�� : ���� Ÿ�� (integer)
	int b;
	int c;
	int mike, jane;  // �ѹ��� ������ ���� ���� ����.

	// printf("���Ĺ��ڿ�")
	// ���Ĺ��ڿ�(format string) �ȿ� ����������(format specifier) : %d, %f..
	printf("�� ���̴� 23���Դϴ�\n");
	printf("�� ���̴� %d���Դϴ�\n", 34);
	printf("�� ���̴� %d���Դϴ�\n", 10 + 9);
	printf("%d ���� ���� %d ���� �Ǵ� ���Դϴ�\n", 2021, 23);

	a = 100;  // a ������ 100 ���� ���� (assign)
	           // ������ ���ʷ� �����ϴ� ���� '�ʱ�ȭ' �� �Ѵ�.
				// = : ���� ������ (assignment operator)

	printf("a = %d\n", a);
	printf("a x a = %d\n", a * a);

	a = 200;  // a ������ 200 �� ���� (�����, ����)

	printf("%d + %d = %d\n", a, a, a + a);

	//printf("x = %d\n", x);  // ������� ���� ������ ��� �Ұ�.
	//int x;   // ������ ������ '����' ���� ��� ����.

	//printf("mike = %d, jane = %d\n", mike, jane);  // �ʱ�ȭ ���� ���� ���� ��� �Ұ�.


	// ������ �ۼ��� ����
	// ������, ����, _ �� ��������
	// ���ڷ� �����ϸ� �ȵ�!
	// ���� �ȵ�!
	// ��ҹ��� ������!  (ex: mike, Mike <-- �ٸ�������) 
	// Ű����(�����)�� ��� �Ұ� (ex: for, if, return...)

	int hello_my_world2021;
	//int a;  // ������ �̸��� �������� ���� �Ұ�.
	
	int aaaa, AAAA, Aaaa, aaaA;  // ��ҹ��� ����
	int _total_;
	//int 2021football; // ���ڷ� ���� �Ұ�
	//int return;  // Ű���� ��� �Ұ�
	//int my world;  // ���� �ȵ�.

	getchar();
	return 0;
}

// �ּ�: CTRL + K, CTRL + C
// �ּ�����: CTRL + K, CTRL + U