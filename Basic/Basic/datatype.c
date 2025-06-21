#include <stdio.h>
/*
    진수 표기
	- 10진수를 2진수로 표기하기
	- 자리수 방식
	  5 -> 101, 10->1010
*/

int main()
{
	//진수 표기
	int num = 10;
	int bNum = 0b1010; //2진수는 접두어로 '0b'를 붙임
	int hNum = 0xA;    //16진수는 접두어로 '0x'를 붙임

	printf("%d\n", num);  //10
	printf("%d\n", bNum); //10
	printf("%d\n", hNum); //10

	return 0;
}