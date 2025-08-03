#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
    - 문자열 연결
	  두 개의 문자열을 연결하여 하나의 문자열로 만들기
	  "smart" + "phone" + '\0' = 총 11바이트 필요
*/

int main()
{
	//b를 a에 합치기
	char a[12] = "smart";  //충분한 크기 확보
	char b[] = "phone";
	int i = 0, j = 0;  //반복 변수

	printf("%s+%s=", a, b); //smart+phone=
	while (a[i] != '\0')
		i++;
	//printf("\ni=%d\n", i);
	while (b[j] != '\0') {
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0'; //a를 출력
	printf("%s\n", a); //smartphone
	/*
	                 i값
		i=0, a[0]=s, 1
	    i=1, a[1]=m, 2
	    i=2, a[2]=a, 3
	    i=3, a[3]=r, 4
	    i=4, a[4]=t, 5
	    i=5, a[4]='\0', 반복 종료
		i=6, a[6]=b[0], p
		i=7, a[7]=b[1], h
		i=8, a[8]=b[2], o
		i=9, a[9]=b[3], n
		i=10, a[10]=b[4], e
		i=11, a[11]='\0' //문자열의 끝 
	*/

	//strcat(복사할 장소, 문자열) - 문자열 연결 함수
	char str1[20] = "smart"; //충분한 크기 확보
	char str2[] = "phone";

	strcat(str1, str2);
	printf("%s\n", str1); //smartphone
	return 0;
}