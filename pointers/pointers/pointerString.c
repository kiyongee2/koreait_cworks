#include <stdio.h>
/*
   ## ���ڿ��� ������
   - ���ڿ��� ���ڵ��� �޸� ������ ���������� ����Ǿ� �־
     �ּҷ� �����ǰ�, ���ڿ��� �����ּҸ� �˸� ��� ���ڿ��� ������ �� ����
*/
int main()
{
	char msg[] = "Good Luck!";
	char* p;  //���ڿ��� �ּҸ� ������ ������

	p = msg;  //&msg[0]

	//���ڿ� ���
	printf("%s\n", msg); //Good Luck!
	printf("%c\n", msg[0]);  //G
	printf("%c\n", msg[1]);  //o

	//������ ���(*p�� �ƴ�!!) 
	//�����ּҸ� ����Ű�� ���ڿ� ��ü ���
	printf("%s\n", p); //Good Luck!
	printf("%s\n", p + 1); //ood Luck!
	printf("%s\n", p + 2); //od Luck!

	return 0;
}