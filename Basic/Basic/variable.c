#include <stdio.h>
/*
   변수 - 데이터를 저장해 두는 메모리 공간(이름)
          한 순간에 한 개의 값을 저장
*/
int main()
{
	//정수형 변수 선언
	int n1 = 10;

	//실수형 변수 선언 - 카멜표기법
	float rateOfBirth = 0.75f; //'f' or 'F'를 끝에 붙임
	double rateOfBirth2 = 0.75; //double이 표준

	//메모리의 주소(번지) - %x, 주소 연산자(&) - 접두어를 붙임
	//double형의 서식문자 - %lf
	printf("%d %x %dbyte\n", n1, &n1, sizeof(n1));
	printf("%.2f %x %dbyte\n", 
		rateOfBirth, &rateOfBirth, sizeof(rateOfBirth));
	printf("%.2lf %x %dbyte\n", 
		rateOfBirth2, &rateOfBirth2, sizeof(rateOfBirth2));

	//문자형 변수 선언
	char grade = 'B';
	//배열 자료형 - 여러 개의 문자 저장
	char nameOfFruit[] = "사과"; 

	//메모리의 크기 측정 함수 - sizeof()
	printf("%c %dbyte\n", grade, sizeof(grade));
	printf("%s %dbyte\n", nameOfFruit, sizeof(nameOfFruit));

	return 0;
}