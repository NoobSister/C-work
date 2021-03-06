#include <stdio.h>

/* 배열과 문자열(string)
*	 - C언어 에선 "문자열" 의 정체는 'char [] 배열' 이다
*	 - C언어의 "문자열"은 
*		  끝이 '\0' (null 문자) 로 끝나는 'char [] 배열' 이다
*/
int main()
{
	char str1[20] = "nice";

	printf("str1 = %s\n", str1);  // %s -> char배열에서 '\0' 만날때까지 출력
	// str1 타입은? => char[]
	// str1[0] 타입은 => char

	for (int i = 0; i < 4; i++) {
		printf("str1[%d] = %c\n", i, str1[i]);
	}

	//char str2[] = { 'n','i','c','e' };
	char str2[] = { 'n', 'i', 'c', 'e', '\0' };
	printf("str2 = %s\n", str2);

	char str3[] = "nice";  // str3 의 길이는 5
	printf("%d\n", sizeof(str3));

	str1[0] = 'D';
	printf("str1 = %s\n", str1);

	str2[4] = '#';  // 문자열 맨끝의 '\0' 문자 삭제 하면, %s 출력시 쓰레기값 출력된다
	printf("str2 = %s\n", str2);


	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}