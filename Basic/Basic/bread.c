#include <stdio.h>
//실습문제 2

int main()
{
	int bread = 10;  //빵
	int person = 3;  //사람
	int 몫, 나머지;
	
	몫 = bread / person; //몫
	나머지 = bread % person; //나머지
	
	printf("각자의 몫: %d\n", 몫);
	printf("남은빵의 개수: %d\n", 나머지);

	return 0;
}