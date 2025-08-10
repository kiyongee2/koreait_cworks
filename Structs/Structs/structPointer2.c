#include <stdio.h>

typedef struct {
	char name[20]; //과일명
	int quantity;  //수량
	char* brand;   //브랜드(문자열 저장할 포인터)
}Fruit;

int main()
{
	//구조체 변수 생성
	char* brand[] = { "청송사과", "상주사과", "음성사과" };

	Fruit f = { "사과", 100, brand[0]};
	Fruit* p;  //f의 주소를 저장할 포인터 선언

	puts("=== 구조체 변수로 출력 ===");
	printf("과일이름: %s\n", f.name);
	printf("수량: %d\n", f.quantity);
	printf("브랜드: %s\n", f.brand);

	p = &f; //f의 주소 저장

	puts("\n=== 구조체 포인터로 출력 ===");
	printf("과일이름: %s\n", p->name);
	printf("수량: %d\n", p->quantity);

	f.brand = "상주사과";
	printf("브랜드: %s\n", p->brand);

	return 0;
}