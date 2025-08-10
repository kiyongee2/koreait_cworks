#include <stdio.h>
#include <time.h> //time()

int main()
{
	time_t ct = time(NULL); //1970.1.1 자정이후부터 지금까지 초로 환산
	//printf("%ld초\n", ct);
	struct tm* now = localtime(&ct);

	//년, 월, 일
	printf("연도: %d\n", now->tm_year + 1900); //2025
	printf("월: %d\n", now->tm_mon + 1); //8(배열 첫인덱스 0이므로 1더함)
	printf("일: %d\n", now->tm_mday); //10

	//시, 분, 초(24 시각제)
	printf("%d : %d : %d\n", now->tm_hour, now->tm_min, now->tm_sec);

	//시, 분, 초(12 시각제) - 시간을 변경, 오전/오후 명시
	int hour = (now->tm_hour > 12) ? now->tm_hour - 12 : now->tm_hour;
	char* ampm = (now->tm_hour < 12) ? "오전" : "오후";
	//printf("%s\n", ampm);

	printf("%s %d : %d : %d\n", ampm, hour, now->tm_min, now->tm_sec);

	//요일 출력 (0-일, 1-월, 2-화... 6-토)
	//printf("현재 요일: %d\n", now->tm_wday);

	char* days[] = { "일", "월", "화", "수", "목", "금", "토" };
	int idx = now->tm_wday;
	printf("오늘은 %s요일 입니다.\n", days[idx]);

	return 0;
}