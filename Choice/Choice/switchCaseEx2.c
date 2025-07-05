#include <stdio.h>
/*
    switch case문 동시에 사용
*/
int main()
{
	int month = 7;
	int day;  //31, 30, 28

	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		day = 31;
		break;
	case 2:
		day = 28;
		break;
	case 4: case 6: case 9: case 11:
		day = 30;
		break;
	default:
		day = 0;
		break;
	}
	printf("%d월은 %d일까지 있습니다.\n", month, day);

	return 0;
}