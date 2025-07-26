#include <stdio.h>
#include <stdlib.h>// srand(), rand()
#include <time.h>
/*
   - 동전을 던진다.
   - 사용자 입력(앞면, 뒷면 선택)
   - 사용자와 동전이 일치하면 '맞았음', 다르면 '꽝!' 출력
   - 종료 조건(1, 2 이외의 수)
*/

int main()
{
	int coin; //동전
	int you;  //사용자
	char aspect[][10] = { "", "앞면", "뒷면" };

	//난수 생성 시드 설정
	srand(time(NULL));

	printf("앞면은 1, 뒷면은 2, 종료는 다른 값을 입력하세요.\n");
	while (1) {
		coin = rand() % 2 + 1;

		printf("동전을 던졌습니다. 앞면? 뒷면? ");
		scanf_s("%d", &you);

		if (you < 1 || you > 2) {
			//종료 조건
			printf("게임을 종료합니다.\n");
			break;
		}
		else {
			//정상 영역(반복 구간)
			//사용자와 동전 출력
			printf("사용자: %s 동전: %s\n", aspect[you], aspect[coin]);
			//동전과 일치 여부(조건 연산자)
			printf("%s\n", (you == coin) ? "맞았음" : "꽝!");
		}
	}

	return 0;
}