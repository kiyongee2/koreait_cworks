#include <stdio.h>
/*
   ## 문자열과 포인터
   - 문자열은 문자들이 메모리 공간에 연속적으로 저장되어 있어서
     주소로 관리되고, 문자열의 시작주소를 알면 모든 문자열에 접근할 수 있음
*/
int main()
{
	char msg[] = "Good Luck!";
	char* p;  //문자열의 주소를 저장할 포인터

	p = msg;  //&msg[0]

	//문자열 출력
	printf("%s\n", msg); //Good Luck!
	printf("%c\n", msg[0]);  //G
	printf("%c\n", msg[1]);  //o

	//포인터 출력(*p가 아님!!) 
	//시작주소를 가리키면 문자열 전체 출력
	printf("%s\n", p); //Good Luck!
	printf("%s\n", p + 1); //ood Luck!
	printf("%s\n", p + 2); //od Luck!

	return 0;
}