#include <stdio.h>

int main()
{
	char data = 'a';

	//아스키코드 'a' - 97
	data++; //data = data + 1; //98
	//printf("%c\n", data); //b

	data++;
	//printf("%c\n", data); //c

	//알파벳 소문자를 저장한 배열 생성
	char alphabets[26];
	char ch = 'a';
	int i;  

	//배열에 저장
	for (i = 0; i < 26; i++) {
		alphabets[i] = ch;
		ch++;
	}
	
	//전체 출력
	for (i = 0; i < 26; i++) {
		printf("%c, %d\n", alphabets[i], alphabets[i]);
	}



	return 0;
}