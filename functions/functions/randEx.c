#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h>  //time()

/*
   rand() 함수
   - 무작위수(난수) 생성
*/
int main()
{
	//시드(seed)값 배정
	//srand(11); //한 번만 난수 생성
	srand(time(NULL)); //seed값 계속 변경

	int randVal = rand();
	printf("%d\n", randVal);

	//동전 구현 - 1(앞면), 2(뒷면)
	//나머지 - (0 ~ n-1) -> (1 ~ n)
	int coin = rand() % 2 + 1; //1, 2
	printf("%d\n", coin);

	if (coin == 1) {
		puts("앞면"); //puts(문자열)
	}
	else {
		puts("뒷면");
	}

	//주사위 던지기
	int dice = rand() % 6 + 1; //1 ~ 6
	printf("%d\n", dice);


	return 0;
}