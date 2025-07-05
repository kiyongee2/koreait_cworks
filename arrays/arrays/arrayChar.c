#include <stdio.h>

int main()
{
	//문자를 저장할 5개의 공간을 가진 배열 생성
	char msg[5] = {'h', 'e', 'l', 'l', 'o'};
	int i;

	//요소 추가
	/*msg[0] = 'h';
	msg[1] = 'e';
	msg[2] = 'l';
	msg[3] = 'l';
	msg[4] = 'o';*/

	//요소 검색
	printf("%c\n", msg[4]);  //'o'

	//전체 출력
	for (i = 0; i < 5; i++) {
		printf("%c ", msg[i]);
	}
	printf("\n");
	//응용 'hello' -> 'yellow'로 변경
	char word[6] = { 'h', 'e', 'l', 'l', 'o' };
	int j;

	//요소 수정
	word[0] = 'y';
	
	//요소 추가
	word[5] = 'w';

	//전체 출력
	for (j = 0; j < 6; j++) {
		printf("%c ", word[j]);
	}

	return 0;
}