#include <stdio.h>

int main()
{
	int age = 21;
	char name[10] = "신유진";

	printf("%d\n", age);  //21
	printf("%s\n", name); //신유진

	//name 배열의 주소
	//배열의 이름은 배열의 시작 주소이다.
	printf("%x %x\n", &name[0], &name[1]);
	printf("%x %x\n", name, name + 1);

	return 0;
}