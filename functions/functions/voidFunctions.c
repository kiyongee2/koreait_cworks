#include <stdio.h>
/*
   - �Լ�(Function)
     . � Ư���� ����� �����ϴ� ���� ���α׷��̴�.
	 . �Լ��� �����ϰ�, ���ǵ� �Լ��� ȣ���Ͽ� �����
	 . ��ȯ �ڷ����� ���� �Լ�, �ִ� �Լ�
	   1. void�� - ��ȯ���� ����
	   2. return�� - ��ȯ���� ����
*/
void sayHello();  //�Լ� ����� ǥ��
void sayHello2(char name[]);
int main()
{
	sayHello();  //�Լ� ȣ��

	sayHello2("��"); //�̸��� �Ű������� ����
	sayHello2("����");

	return 0;
}

//�λ��ϱ� ��� �Լ� ����
void sayHello() {
	printf("�ȳ��ϼ���~\n");
}

//�̸��� �θ��鼭 �λ��ϱ� ��� �Լ�
void sayHello2(char name[]) {
	printf("%s��~ �ȳ��ϼ���.\n", name);
}