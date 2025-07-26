#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h>
/*
   srand(time(NULL)) - 시드 배정(변하도록 시간으로 설정)
   rand() % n - 결과(0 ~ n-1)
*/
int main()
{
	int coin;

	//난수 생성
	srand(time(NULL));
	coin = rand() % 2 + 1; //1, 2
	printf("%d\n", coin);

	//문자열 배열
	//char aspect[] = "앞면";
	//aspect[단어의 수][최대문자의 수]
	char aspect[][10] = {"", "앞면", "뒷면"};

	printf("%s\n", aspect[0]);
	printf("%s\n", aspect[1]);
	printf("%s\n", aspect[2]);

	return 0;
}