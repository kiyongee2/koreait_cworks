#include <stdio.h>

/*
   ����ü ����� ���� ����
*/
#define MAX_LEN 4

typedef struct {
	int data[MAX_LEN]; //������ ������ �迭
	int top; //top �ε���
}Stack;

//���� �ʱ�ȭ �Լ�
void initStack(Stack* s) {
	s->top = -1;
}

void push(Stack* s, int x) {
	if (s->top >= MAX_LEN - 1) {
		printf("������ ���� á���ϴ�. PUSH ����: %d\n", x);
	}
	else {
		s->data[++(s->top)] = x;
		printf("PUSH: %d\n", x);
	}
}

int pop(Stack* s) {
	if (s->top < 0) {
		printf("������ ��� �ֽ��ϴ�.\n");
		return -1;
	}
	else
		return s->data[(s->top)--];
}

int main()
{
	Stack stack;  //Stack ����ü ���� ����

	initStack(&stack); //�ʱ�ȭ �Լ� ȣ��

	//��� �߰�(80 - 70 - 95 - 85)
	push(&stack, 80);
	push(&stack, 70);
	push(&stack, 95);
	push(&stack, 85);
	//push(&stack, 100);

	puts("=== ���ÿ��� ��� ���� ===");
	/*printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));*/ //pop() ����

	//��� ����(85 - 95 - 70 - 80 )
	while (stack.top != -1) { //������ ����
		printf("%d ", pop(&stack));
	}
}