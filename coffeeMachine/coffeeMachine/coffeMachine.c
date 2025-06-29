#include <stdio.h>
/*
   # 실행 파일(exe) - Debug모드 -> Release 모드로 변경
   # 자동판매기 프로그램
	 - 커피 가격 : 500원
	 - 커피 개수 : 5개
	 - 투입 동전이 500원이면 "커피가 나옵니다."
	 - 투입 동전이 500원을 초과하며 "커피가 나오고 거스름돈이 나옵니다."
	 - 투입 동전이 500원 미만이면 "커피가 나오지 않고 돈을 돌려줍니다."
	 - 커피가 모두 소진되면 판매를 중단합니다.
*/

int main()
{
	int money;
	int coffee = 5;

	printf("********** 자동판매기 프로그램 **********\n");
	while (1) {
		printf("동전을 넣어주세요: ");
		scanf_s("%d", &money);

		if (money == 500) {
			printf("커피가 나옵니다.\n");
			coffee--;  //coffee -= 1
		}
		else if (money > 500) {
			printf("커피가 나오고 거스름돈 %d원을 돌려줍니다.\n",
				(money - 500));
			coffee--;
		}
		else {
			printf("커피가 나오지 않고 돈을 돌려줍니다.\n");
		}

		if (coffee == 0) {
			printf("커피가 모두 소진되어 판매를 중단합니다.\n");
			break; //for문 빠져나옴 
		}
	}

	system("pause");  //exe 파일에서 윈도우(창) 종료 방지

	return 0;
}