#include <stdio.h>

#define MAX_LEN 3

char stack[MAX_LEN];  //���ڸ� ������ ���� ����
top = -1;

void push(char ch) {
	if (top >= MAX_LEN - 1) {
		printf("������ ���� á���ϴ�.\n");
	}
	else {
		stack[++top] = ch;
		printf("%c\n", stack[top]);
	}
}

int pop() {
	if (top < 0) {
		printf("������ ������ϴ�.!\n");
		return -1; //���� ����
	}
	else 
		return stack[top--]; //�İ���(char -> int �ڵ����� ����ȯ)
}

int main()
{
	printf("\n=== ���ÿ� �ڷ� ���� ===\n"); //a - b - c
	push('a');
	push('b');
	push('c');
	push('d');

	printf("\n=== ���ÿ��� �ڷ� ���� ===\n"); //c - b - a
	printf("%c\n", pop());
	printf("%c\n", pop());
	printf("%c\n", pop());
	//printf("%c\n", pop());  //�� ���¿��� pop() �õ�

	return 0;
}