#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char gender;
	int age;

	scanf("%c", &gender);
	scanf("%d", &age);

	if (gender == 'M') {
		if (age >= 18) {
			printf("MAN");
		}
		else {
			printf("BOY");
		}
	}
	else if (gender == 'F') {
		if (age >= 18) {
			printf("WOMAN");
		}
		else {
			printf("GIRL");
		}
	}

	//char gender;
	//int age;

	//scanf("%c", &gender);
	//scanf("%d", &age);

	//if (gender == 'M') {
	//	// 남자
	//	if (age >= 18) {
	//		printf("MAN");
	//	}
	//	else {
	//		printf("BOY");
	//	}
	//	
	//}
	//else if (gender == 'F') {
	//	// 여자
	//	if (age >= 18) {
	//		printf("WOMAN");
	//	}
	//	else {
	//		printf("GIRL");
	//	}
	//}

	//printf("\n-----------------------------\n");

	//if (gender == 'M' && age >= 18) printf("MAN");
	//else if (gender == 'M' && age < 18) printf("BOY");
	//else if (gender == 'F' && age >= 18) printf("WONAM");
	//else if (gender == 'F' && age < 18) printf("GIRL");

	getchar();
	/*printf("\nENTER 를 누르면 종료합니다\n");
	getchar();*/
	return 0;
}