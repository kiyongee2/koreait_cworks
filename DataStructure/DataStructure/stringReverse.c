#include <stdio.h>
#define MAX_LEN 128 //문자열의 최대 길이

/*
   스택을 활용한 문자열 뒤집기 프로그램
*/

typedef struct _Stack{
	char data[MAX_LEN];
	int top;
}Stack;

//스택 초기화
void initStack(Stack* s) {
	s->top = -1;
}

//push()
void push(Stack* s, char ch) {
	if (s->top >= MAX_LEN - 1) {
		printf("스택이 가득 찼습니다.\n");
		return;
	}
	else
		s->data[++(s->top)] = ch;  //맨 위에서 1개씩 저장
}

char pop(Stack* s) {
	if (s->top > -1) {
		return s->data[(s->top)--];
	}
	else
		return '\0';
}

int main()
{
	Stack stack;
	char str[MAX_LEN]; //입력할 문자열

	initStack(&stack); //스택 초기화

	//사용자 입력 - 문자열 입력
	printf("문자열 입력: ");
	//fgets() - 공백문자 허용
	fgets(str, MAX_LEN, stdin); //stdin - 콘솔 입력,

	//문자를 한 글씩 push - 문자열의 끝 : '\0'
	//char str[] = "hello"
	for (int i = 0; str[i] != '\0'; i++) {
		push(&stack, str[i]);
	}

	//pop하면서 뒤집어 출력
	printf("뒤집은 문자열: ");
	while (stack.top != -1) {
		printf("%c", pop(&stack));
	}
	
	return 0;
}