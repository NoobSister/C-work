#include <stdio.h>

/*
	do ~ while 
	일단 '한 번'은 수행하고 조건식 검사
*/

int main()
{
	int i = 1;
	while (i < 0) {
		printf("while 수행 중\n");
	}

	i = 1;
	do {
		printf("do~while 수행 중 %d\n", i);
	} while (i < 0);  // 세미콜론 꼭!

	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}