#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    = 다중 조건문(if ~ else if ~ else 구문)
	- 조건: 과목의 점수에 따른 학점 계산
	  .90 ~ 100점: A -> 점수가 90 이상이고, 100 이하임
	  .80 ~ 89점: B
	  .70 ~ 79점: C
	  .70점 미만: D
*/

int main()
{ 
	int score;  //과목의 점수
	char grade;      //학점

	printf("점수 입력: ");
	scanf("%d", &score);

	if (score >= 90 && score <= 100) { // 참(1) && 참(1)
		grade = 'A'; //1개의 문자는 홑따옴표 사용
	}
	else if (score >= 80 && score < 90) {
		grade = 'B';
	}
	else if (score >= 70 && score < 80) {
		grade = 'C';
	}
	else {
		grade = 'D';
	}

	printf("점수는 %d점이고, 학점은 %c입니다.\n", score, grade);
	printf("점수의 주소 %x이고, 학점의 주소 %x입니다.\n", &score, &grade);

	return 0;
}