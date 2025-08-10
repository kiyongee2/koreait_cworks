#include <stdio.h>
/*
   순차 탐색 
   - 배열의 첫번째 요소부터 하나씩 검사
   - 찾은 후에도 불필요한 비교 : 반복문이 계속 돈다.
*/
int main()
{
	int a[9] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
	int i;
	int x = 10;  //찾을 값
	int found = 0;  //상태(토글) 변수

	for (i = 0; i < 9; i++) {
		if (a[i] == x) {
			printf("%d는(은) a[%d]에 있습니다\n", x, i);
			found = 1;  //찾았음
			break;  //찾아서 반복 중단함
		}
	}

	if (!found)
		printf("%d는(은) 없습니다.", x);

	return 0;
}