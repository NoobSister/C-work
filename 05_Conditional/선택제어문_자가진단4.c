#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	float weight;
	
	scanf("%f", &weight);

	if (weight <= 50.80)
		printf("Flyweight");
	else if (weight <= 61.23)
		printf("Lightweight");
	else if (weight <= 72.57)
		printf("Middleweight");
	else if (weight <= 88.45)
		printf("Cruiserweight");
	else
		printf("Heavyweight");

	/*printf("\nENTER 를 누르면 종료합니다\n");
	getchar();*/
	return 0;
}