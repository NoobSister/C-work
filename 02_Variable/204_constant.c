#include <stdio.h>

/*
*	상수 (Constant)
*	한번 값이 정해지면 변경할수 없는 데이터
*	(변수의 반대)
*
*	방법1 : const 키워드 사용
*	방법2 : #define 사용
*/

#define MAX_VALUE 100

int main()
{
	printf("상수(constant)\n");
	
	const int NUM = 10; // int 타입 상수 NUM 선언 및 초기화
	                    // ※ 일반적으로 상수는 대문자로 작명
	//NUM = 20;  // 상수는 한번 값을 대입하면 변경 불가

	printf("상수값 > %d\n", NUM);

	// ※ rename : CTRL + R, CTRL + R

	printf("MAX_VALUE = %d\n", MAX_VALUE);
	//MAX_VALUE = 200;

	int a;
	a = 100;
	//100 = a;   // 코드상에 직접 입력하는 숫자, 문자, 문자열 --> 'literal 상수' 라 한다.
				// 정수형 literal => int 타입으로 인식
				// 실수형 literal => double 타입으로 인식

	getchar();
	return 0;
}