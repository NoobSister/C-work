#include <stdio.h>
#pragma warning(disable:4996)
/*

*/

int main()
{
	float score;
	
	scanf("%f", &score);

	switch ((int)score) {
	case 4:
		printf("scholarship");
		break;
	case 3:
		printf("next semester");
		break;
	case 2:
		printf("seasonal semester");
		break;
	default:
		printf("retake");
	}

	//printf("\nENTER 를 누르면 종료합니다\n");
	//getchar();
	return 0;
}