#include <stdio.h>

int main()
{
	//산술 연산자
	int a = 99;
	int b = 2;

	/*printf("%d\n", a + b); //101
	printf("%d\n", a - b); //97
	printf("%d\n", a * b); //198
	printf("%.1f\n", (float)a / b); //49.5 - 나누기
	printf("%d\n", a / b); //49 - 몫
	printf("%d\n", a % b); //1 - 나머지

	//1 더하기
	//후치 연산 - 나중에 처리됨
	printf("%d\n", a++); //99
	//a = a + 1;
	printf("%d\n", a);  //100

	//전치 연산
	printf("%d\n", ++a);  //101
	printf("%d\n", a);  //101 */

	//비교 연산자
	int x = 5, y = 3, z = 2;
	printf("%d\n", x > y); //1(참)
	printf("%d\n", x < y); //0(거짓)
	printf("%d\n", x == y); //0(거짓)
	printf("%d\n", x != y); //1(참)

	/*
		논리 연산자
		&& - 두 조건이 모두 참인 경우 참 : true(1) && true(1) - 참
		|| - 두 조건중 하나만 참이어도 참 : false(0) || false(0) -> 거짓
		! - 논리 부정(한 조건이 참이면 거짓이고, 거짓이면 참)
	*/
	printf("%d\n", (x > y) && (y == z)); // 1 && 0 -> 0
	printf("%d\n", (x > y) || (y == z)); // 1 || 0 -> 1
	printf("%d\n", !(x > y)); // !1 -> 0
	

	//조건 연산자 - (조건) ? 참(1) : 거짓(0)
	int value;  //숫자를 저장할 변수
	int fatherAge = 44;
	int motherAge = 47;
	char result; //문자를 저장할 변수 선언

	//조건식 연산
	value = (3 > 4) ? 10 : 20;
	result = (fatherAge > motherAge) ? 'T' : 'F';

	printf("%d\n", value);  //20
	printf("%c\n", result);  //F

	//절대값 연산
	int n = -4;
	int result2;
	                       
	result2 = (n < 0) ? -n : n;
	printf("%d\n", result2); //4

	printf("=== 복합대입 연산자 ===\n");
	int val = 10;

	val += 3; //val = val + 3;
	printf("%d\n", val);  //13

	val -= 3; //val = val - 3;
	printf("%d\n", val); //10

	val *= 3; //val = val * 3;
	printf("%d\n", val); //30

	val /= 3; //val = val / 3;
	printf("%d\n", val); //10

	return 0;
}