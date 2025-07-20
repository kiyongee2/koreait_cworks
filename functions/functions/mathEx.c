#include <stdio.h>
#include <math.h>

//수학 관련 라이브러리 함수 사용
int main()
{
	//절대값 - abs()
	printf("%d\n", abs(-6));

	//반올림 - round()
	printf("%.1lf\n", round(2.54)); //3.0
	printf("%.lf\n", round(2.54)); //3
	printf("%.1lf\n", round(2.14)); //2.0

	//버림 - floor()
	printf("%.1lf\n", floor(2.54)); //2.0

	//올림 - ceil()
	printf("%.1lf\n", ceil(2.14)); //3.0

	//거듭제곱 - pow()
	printf("%.1lf\n", pow(2, 4)); //16.0
	printf("%.lf\n", pow(2, 4)); //16.0

	//제곱근 - sqrt()
	printf("%.lf\n", sqrt(16)); //4

	return 0;
}