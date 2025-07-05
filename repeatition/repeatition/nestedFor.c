#include <stdio.h>
/*
	중첩 for문
	for(){ //행
	  for(){ //열
	     실행문
	  }
	}
*/
int main()
{
	//int i;  //행 변수
	//int j;  //열 변수

	/*for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			printf("가");
		}
		printf("\n");
	}*/

	/*
	   i=1, j=1, 가
	        j=2, 가가
			j=3, 가가가 (행바꿈) 
	   i=2, j=1, 가
	        j=2, 가가
			j=3, 가가가 (행바꿈)
	   i=3, j=1, 가
	        j=2, 가가
			j=3, 가가가 (행바꿈)
	   i=4, (for문 종료)
	
	*/

	//별모양 만들기
	/*for (i = 1; i <= 4; i++) {
		for (j = 1; j <= 4; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	//직각삼각형 모양
	/*
		*
		**
		***
		****
		
		별(*)
		1행 - 1(별 개수)
		2행 - 2
		3행 - 3
		4행 - 4
	*/
	/*for (i = 1; i <= 4; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	//printf("\n");
	/*
	  ****
	   ***
	    **
	     *
	
	  별(*)
		1행 - 4(별 개수)
		2행 - 3
		3행 - 2
		4행 - 1
	*/
	/*for (i = 1; i <= 4; i++) {
		for (j = 1; j <= 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	//5행 5열에서 숫자를 순차적으로 출력하기
	/*
	   1 2 3 4 5
	   6 7 8 9 10
	   11 12 13 14 15
	   16 17 18 
	*/
	int i, j;
	int num;

	for (i = 0; i < 4; i++) { //행(row)
		for (j = 1; j <= 5; j++) { //열(column)
			num = 5 * i + j;
			if (num > 18)
				break;
			printf("%d ", num);
		}
		printf("\n");
	}

	return 0;
}