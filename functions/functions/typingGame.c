#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h> //time()
/*
   영어 타자 게임
   - 컴퓨터가 저장된 단어를 랜덤하게 출력
*/
int main()
{
	//words[단어의 개수(생략가능)][최대문자수]
	char words[][20] = { "ant", "bear", "chicken", "eagle", "elephant",
				"horse", "monkey", "lion", "penguin", "tiger" };
	int n = 1;  //문제 번호
	char question[20]; //문제
	char answer[20];   //사용자 정답
	clock_t start, end;  //시작, 종료시간
	double elapsedTime;  //소요시간

	srand(time(NULL)); //난수 생성을 위한 시드 설정

	printf("[영어 타자 게임], 준비되면 엔터> ");
	getchar();  //'\n'(개행 문자)

	start = clock();  //게임 시작 시간
	while (n <= 10) {
		printf("\n문제 %d\n", n);
		int size = sizeof(words) / sizeof(words[0]);
		int rndIdx = rand() % size;  //size-10, rndIdx - 0 ~ 9
		strcpy(question, words[rndIdx]); //strcpy(저장할 장소, 문자열)
		printf("%s\n", question); //문제 출제

		scanf("%s", answer); //사용자 입력

		if (strcmp(answer, question) == 0) { //두 단어가 일치하면
			printf("통과!\n");
			n++; //다음 문제로 증가
		}
		else {
			printf("오타! 다시 도전!\n");
		}
	}
	end = clock();
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("게임 소요 시간: %.2lf초\n", elapsedTime);

	return 0;
}