#include <stdio.h>
/*
    ��� �˰���
	- ��� �Լ��� ȣ���ؼ� ���
	- ��� ȣ���̶� �Լ��ȿ��� �ڱ� �ڽ��� �θ��� ���� �ǹ�
	- ��� ȣ���� ���� �ݺ��ϹǷ� ���� ������ �ʿ���
*/
void func(int n) {
	//���1
	/*printf("Help Me!\n");
	n--;  //n�� 1����
	if (n <= 0)
		return;  //����
	else
		func(n); //��� ȣ��*/

	//���2
	if (n <= 0)
		return;
	else {
		printf("Help Me!\n");
		func(n - 1);  //func(�� ������) ȣ��
	}
}

int main()
{
	int count = 4;

	func(count);

	return 0;
}