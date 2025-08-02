#include <stdio.h>
#include <math.h> //수학 관련 라이브러리
/*
   중첩 구조체
    - 참조: 구조체의 멤버 변수가 다른 구조체의 자료형인 경우
*/
struct Point {
	//멤버 변수
	int x;  //점의 x좌표
	int y;  //점의 y좌표
};

struct Rectangle {
	//Point 구조체 참조(변수 선언)
	struct Point p1;
	struct Point p2;
};

int main()
{
	//두 점을 이용한 사각형 만들기
	//좌측 상단 좌표, 우측 하단 좌표 생성
	struct Rectangle rect;
	int width, height; 

	//속성값 입력
	rect.p1.x = 1;
	rect.p1.y = 5;

	rect.p2.x = 4;
	rect.p2.y = 2;

	//사각형 출력
	printf("점1(%d, %d), 점2(%d, %d)\n",
		rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);

	//너비와 높이 계산
	width = abs(rect.p2.x - rect.p1.x); //abs() -> 절대값
	height = abs(rect.p2.y - rect.p1.y);

	printf("너비: %d, 높이: %d\n", width, height);

	return 0;
}