#include <stdio.h>

#define MAX_LEN 3

char stack[MAX_LEN];  //문자를 저장할 스택 생성
top = -1;

void push(char ch) {
	if (top >= MAX_LEN - 1) {
		printf("스택이 가득 찼습니다.\n");
	}
	else {
		stack[++top] = ch;
		printf("%c\n", stack[top]);
	}
}

int pop() {
	if (top < 0) {
		printf("스택이 비었습니다.!\n");
		return -1; //오류 상태
	}
	else 
		return stack[top--]; //후감소(char -> int 자동으로 형변환)
}

int main()
{
	printf("\n=== 스택에 자료 저장 ===\n"); //a - b - c
	push('a');
	push('b');
	push('c');
	push('d');

	printf("\n=== 스택에서 자료 제거 ===\n"); //c - b - a
	printf("%c\n", pop());
	printf("%c\n", pop());
	printf("%c\n", pop());
	//printf("%c\n", pop());  //빈 상태에소 pop() 시도

	return 0;
}