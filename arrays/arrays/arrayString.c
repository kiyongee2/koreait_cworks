#include <stdio.h>

int main()
{
	//문자열을 배열에 저장
	//인덱스 개수가 문자 개수보다 1개 많아요
	//문자열의 끝에는 널문자('\0') 포함되어 있음
	char fr1[6] = "apple";
	char fr2[6] = { 'a', 'p', 'p', 'l', 'e', '\0' };
	//한글은 한 글자에 2바이트
	char fr3[] = "바나나"; 

	//서식 문자 : %d-정수, %c-한문자, %s-문자열
	printf("%s %d\n", fr1, sizeof(fr1));  //apple, 6
	printf("%s %d\n", fr2, sizeof(fr2));  //apple, 6
	printf("%s %d\n", fr3, sizeof(fr3));  //바나나, 7


	return 0;
}