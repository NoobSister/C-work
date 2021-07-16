#include <stdio.h>
#pragma warning(disable:4996)
/*
5명 학생의 국어 영어 수학 과학 4과목의 점수를 입력 받아서 
각 개인별로 평균이 80 이상이면“합격” 
그렇지 않으면“불합격”을 출력하고 
합격한 사람의 수를 출력하는 프로그램을 작성하시오.

85 67 95 65
80 95 86 56
100 98 67 86
95 76 84 65
67 86 90 76
*/

#define NUM_STU 5  // 학생 수
#define NUM_SUBJ 4	// 과목의 개수

int main()
{
	int point[NUM_STU][NUM_SUBJ]; // 5명 x 4과목 점수

	for (int stu = 0; stu < NUM_STU; stu++) {
		for (int subj = 0; subj < NUM_SUBJ; subj++) {
			scanf("%d", &point[stu][subj]);
		}
	}

	int success = 0;  // 합격자 

	// 학생별 평균 계산
	for (int stu = 0; stu < NUM_STU; stu++) {
		int sum = 0;  // 총점
		double avg = 0.0;  //평균

		// 위 학생(stu) 의 4 과목 점수 합산
		for (int subj = 0; subj < NUM_SUBJ; subj++) {
			sum += point[stu][subj];
		}
		avg = (double)sum / NUM_SUBJ; // 평균 계산!

		// 합격 여부 판정
		if (avg >= 80) {
			printf("pass\n");
			success++;  // 합격자 수 +1 증가
		}
		else {
			printf("fail\n");
		}
	}

	printf("Successful : %d\n", success);

	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}