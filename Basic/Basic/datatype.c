#include <stdio.h>
/*
    ���� ǥ��
	- 10������ 2������ ǥ���ϱ�
	- �ڸ��� ���
	  5 -> 101, 10->1010
*/

int main()
{
	//���� ǥ��
	int num = 10;
	int bNum = 0b1010; //2������ ���ξ�� '0b'�� ����
	int hNum = 0xA;    //16������ ���ξ�� '0x'�� ����

	printf("%d\n", num);  //10
	printf("%d\n", bNum); //10
	printf("%d\n", hNum); //10

	return 0;
}