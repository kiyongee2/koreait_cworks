#include <stdio.h>

int main()
{
	//문자 1개 입력 - getchar();
	char c1, c2;

	printf("문자 1개 입력: ");
	c1 = getchar();

	//'\n'을 만나기 전까지 버퍼 비움
	while (getchar() != '\n');

	c2 = getchar();

	printf("입력된 문자: %c %c\n", c1, c2);


	return 0;
}