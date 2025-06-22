#include <stdio.h>

int main()
{
	//자료형 변환
	//자동 형변환
	int iNum = 20;
	float fNum = iNum;  //큰 자료형 = 작은 자료형

	printf("%d\n", iNum); //20
	printf("%.1f\n", fNum); //20.0

	//강제 형변환 - cast(소괄호로 묶어줌)
	//실수형인데 정수형으로 변환
	double dNum = 2.54;
	int iNum2 = (int)dNum; //왼쪽이 작을때 작은쪽 자료형 맞춤

	printf("%d\n", iNum2);

	//변수의 값 변경
	dNum = 1.2;
	fNum = 0.9F;

	iNum = (int)dNum + (int)fNum; //1+0 = 1
	printf("%d\n", iNum);

	iNum = (int)(dNum + fNum);    //(int)(2.1) = 2
	printf("%d\n", iNum);

	printf("=== 변수의 값 교환 ===\n");
	int x = 10;
	int y = 20;
	int temp;    //임시 변수

	printf("=== 교환 전 ===\n");
	printf("x = %d, y = %d\n", x, y);

	//교환 작업
	temp = x;  //'=' - 대입연산자
	x = y;
	y = temp;

	printf("=== 교환 후 ===\n");
	printf("x = %d, y = %d\n", x, y);

	return 0;
}