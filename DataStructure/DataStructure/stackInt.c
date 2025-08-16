#include <stdio.h>
/*
   ����(Stack)
   - ���� ������ �ڷḦ ���߿� ������ �ڷᱸ��
   - LIFO(Last In First Out)
   - ���ø޸�, ���� ������ �� ���
*/
//�迭 ����� ���� ����
#define MAX_LEN 4  //������ �ִ� ũ��

//���� ����
int stack[MAX_LEN]; //������ �ڷḦ ������ ���� ����
int top = -1; //����� �ڷᰡ ���� �ʱ�ȭ ����

//���ÿ� ��� �߰�
void push(int x) { //top = 0 ~ 3
	if (top >= MAX_LEN - 1) {
		printf("������ ���� á���ϴ�. %d\n", x);
	}
	else {
		stack[++top] = x; //�� ����
	}
}

//���ÿ��� ��� ����
int pop() {
	if (top < 0) {
		printf("������ ��� �ֽ��ϴ�.\n");
		return -1;
	}
	else {
		return stack[top--];
	}
}

//���� ���� ��� �Լ�
void printStack() {
	printf("\n���� ������ ����:\n");
	if (top == -1) {
		printf("(��� ����)\n");
	} 
	else {
		printf("���� ����� ��: %d\n", top + 1);
		for (int i = 0; i <= top; i++) {
			printf("%d\n", stack[i]);
		}
	}
}


int main()
{
	//�� �߰�(80 - 70 - 95 - 85)
	push(80); //0�� �ε���
	push(70); //1
	push(95); //2
	push(85); //3
	//push(100); //�ʰ� �Է½� ����
	
	//�� ����(85 - 95 - 70 - 80)
	pop(); 
	pop();
	pop();
	//pop();
	//pop(); //�� ���¿��� pop() �õ���

	//������ ���� ��� 
	printStack();

	return 0;
}