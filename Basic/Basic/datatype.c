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
	/*int num = 10;
	int bNum = 0b1010; //2진수는 접두어로 '0b'를 붙임
	int hNum = 0xA;    //16진수는 접두어로 '0x'를 붙임

	printf("%d\n", num);  //10
	printf("%d\n", bNum); //10
	printf("%d\n", hNum); //10*/

	//자료형의 범위
	printf("===== char 자료형 =====\n");
	/*
	    아스키 코드 - 128개(7비트)
		영대- 26개, 영소-26개, 숫자-10, 특수문자-33, 제어-33개
		char 자료형 - 1바이트(8비트) : -128 ~ 127
	*/
	char ch = 'A';
	char value1 = -128;
	char value2 = 128;

	printf("%c %d\n", ch, ch);  //A, 65
	printf("%d\n", value1); //-128
	printf("%d\n", value2); //범위 초과(overflow) 오류

	//unsigned를 붙이면 0 ~ 255(양수만 표현함)로 변환됨
	//short(2바이트- 16비트) : -32768~32767
	unsigned char value3 = 128; 
	short value4 = 128;

	printf("%d\n", value3); //128
	printf("%d\n", value4); //128

	printf("===== 정수형 자료형 =====\n");
	//int(4바이트, 32비트) : -21억4천 ~ 21억4천
	int iNum = 2100000000;
	int iNum2 = 2200000000;

	printf("%d\n", iNum);
	printf("%d\n", iNum2); //범위 초과(overflow) 오류

	//long(4바이트), long long(8byte) - 2의 63승
	long lNum = 2200000000L;
	long long llNum = 2200000000L;

	printf("%ld\n", lNum); //범위 초과(overflow) 오류
	printf("%lld\n", llNum);

	printf("===== 실수형 자료형 =====\n");
	//float(4byte) - 소수 6째 자리까지 계산
	//double(8byte)- 소수 15째 자리까지 계산됨
	float fNum = 0.1234567F; //범위 초과 오류 발생
	double dNum = 0.1234567890123456; //범위 초과로 오류

	printf("%f\n", fNum);
	printf("%.15lf\n", dNum);

	//변수 이름 작성시 주의(오류)
	//float 2fNum = 0.12F; //숫자로 시작하면 안됨
	//double d Num2 = 0.123; //변수 이름에 공백이 있으면 안됨
	//int if = 100;  //예약어 또는 명령어 사용 불가

	return 0;
}