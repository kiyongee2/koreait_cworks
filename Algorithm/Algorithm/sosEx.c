#include <stdio.h>
/*
    재귀 알고리즘
	- 재귀 함수를 호출해서 사용
	- 재귀 호출이란 함수안에서 자기 자신을 부르는 것을 의미
	- 재귀 호출은 무한 반복하므로 종료 조건이 필요함
*/
void func(int n) {
	//방법1
	/*printf("Help Me!\n");
	n--;  //n을 1감소
	if (n <= 0)
		return;  //종료
	else
		func(n); //재귀 호출*/

	//방법2
	if (n <= 0)
		return;
	else {
		printf("Help Me!\n");
		func(n - 1);  //func(더 작은값) 호출
	}
}

int main()
{
	int count = 4;

	func(count);

	return 0;
}