#include <stdio.h>
#pragma warning(disable:4996)
/*

*/

int main()
{
	char word;

	scanf("%c", &word);

	if (word == 'A') {
		printf("Excellent");
	}
	else if (word == 'B') {
		printf("Good");
	}
	else if (word == 'C') {
		printf("Usually");
	}
	else if (word == 'D') {
		printf("Effort");
	}
	else if (word == 'F') {
		printf("Failure");
	}
	else {
		printf("error");
	}

	//printf("\nENTER �� ������ �����մϴ�\n");
	//getchar();
	return 0;
}