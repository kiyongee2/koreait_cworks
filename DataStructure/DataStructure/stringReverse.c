#include <stdio.h>
#define MAX_LEN 128 //���ڿ��� �ִ� ����

/*
   ������ Ȱ���� ���ڿ� ������ ���α׷�
*/

typedef struct _Stack{
	char data[MAX_LEN];
	int top;
}Stack;

//���� �ʱ�ȭ
void initStack(Stack* s) {
	s->top = -1;
}

//push()
void push(Stack* s, char ch) {
	if (s->top >= MAX_LEN - 1) {
		printf("������ ���� á���ϴ�.\n");
		return;
	}
	else
		s->data[++(s->top)] = ch;  //�� ������ 1���� ����
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
	char str[MAX_LEN]; //�Է��� ���ڿ�

	initStack(&stack); //���� �ʱ�ȭ

	//����� �Է� - ���ڿ� �Է�
	printf("���ڿ� �Է�: ");
	//fgets() - ���鹮�� ���
	fgets(str, MAX_LEN, stdin); //stdin - �ܼ� �Է�,

	//���ڸ� �� �۾� push - ���ڿ��� �� : '\0'
	//char str[] = "hello"
	for (int i = 0; str[i] != '\0'; i++) {
		push(&stack, str[i]);
	}

	//pop�ϸ鼭 ������ ���
	printf("������ ���ڿ�: ");
	while (stack.top != -1) {
		printf("%c", pop(&stack));
	}
	
	return 0;
}