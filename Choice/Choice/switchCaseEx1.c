#include <stdio.h>

int main()
{
	int floor;

	printf("가고 싶은 층을 누르세요: ");

	//scanf_s() - 보안 처리 할 필요없음
	scanf_s("%d", &floor);  //주소연산자(&) 붙이기

	switch (floor) {
	case 1:
		printf("1층을 눌렀습니다.\n");
		break;
	case 2:
		printf("2층을 눌렀습니다.\n");
		break;
	case 3:
		printf("3층을 눌렀습니다.\n");
		break;
	defalut:
		printf("건물에 없는 층입니다.\n");
		break;
	}

	return 0;
}