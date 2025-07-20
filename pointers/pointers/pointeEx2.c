#include <stdio.h>

int main()
{
	char c1 = 'A';
	char* c2;

	c2 = &c1;  //c1의 주소를 저장

	*c2 = 'B';  //값 수정

	printf("%c %x\n", c1, &c1); //B b7cffc74

	//포인터가 가리키는 값(역참조) - *c2
	printf("%c %x\n", *c2, c2); //B b7cffc74

	return 0;
}