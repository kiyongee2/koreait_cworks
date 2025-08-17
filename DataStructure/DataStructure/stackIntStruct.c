#include <stdio.h>

/*
   구조체 기반의 스택 정의
*/
#define MAX_LEN 4

typedef struct {
	int data[MAX_LEN]; //정수를 저장할 배열
	int top; //top 인덱스
}Stack;

//스택 초기화 함수
void initStack(Stack* s) {
	s->top = -1;
}

void push(Stack* s, int x) {
	if (s->top >= MAX_LEN - 1) {
		printf("스택이 가득 찼습니다. PUSH 실패: %d\n", x);
	}
	else {
		s->data[++(s->top)] = x;
		printf("PUSH: %d\n", x);
	}
}

int pop(Stack* s) {
	if (s->top < 0) {
		printf("스택이 비어 있습니다.\n");
		return -1;
	}
	else
		return s->data[(s->top)--];
}

int main()
{
	Stack stack;  //Stack 구조체 변수 생성

	initStack(&stack); //초기화 함수 호출

	//요소 추가(80 - 70 - 95 - 85)
	push(&stack, 80);
	push(&stack, 70);
	push(&stack, 95);
	push(&stack, 85);
	//push(&stack, 100);

	puts("=== 스택에서 요소 삭제 ===");
	/*printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));*/ //pop() 오류

	//요소 삭제(85 - 95 - 70 - 80 )
	while (stack.top != -1) { //안전한 제거
		printf("%d ", pop(&stack));
	}
}