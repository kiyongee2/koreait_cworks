#include <stdio.h>
#include <string.h>
/*
	문자열 처리 알고리즘
	- 문자열 역순으로 바꾸기
*/
int main()
{
	char a[] = "Elephant";
	char b[10];  //충분한 크기 확보(4개 이상)
	int n;  //문자열의 개수
	int i;  //반복 변수

	n = strlen(a); //strlen(문자열) -> 문자열의 개수
	printf("%d개\n", n); //8

	for (i = n-1; i >= 0; i--) {
		//인덱스 - 2(G), 1(O), 0(D)
		b[n-1-i] = a[i];
	}
	b[n] = '\0';
	printf("거꾸로 복사: %s\n", b);

	return 0;
}