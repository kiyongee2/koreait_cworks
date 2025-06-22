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
	/*int num = 10;
	int bNum = 0b1010; //2������ ���ξ�� '0b'�� ����
	int hNum = 0xA;    //16������ ���ξ�� '0x'�� ����

	printf("%d\n", num);  //10
	printf("%d\n", bNum); //10
	printf("%d\n", hNum); //10*/

	//�ڷ����� ����
	printf("===== char �ڷ��� =====\n");
	/*
	    �ƽ�Ű �ڵ� - 128��(7��Ʈ)
		����- 26��, ����-26��, ����-10, Ư������-33, ����-33��
		char �ڷ��� - 1����Ʈ(8��Ʈ) : -128 ~ 127
	*/
	char ch = 'A';
	char value1 = -128;
	char value2 = 128;

	printf("%c %d\n", ch, ch);  //A, 65
	printf("%d\n", value1); //-128
	printf("%d\n", value2); //���� �ʰ�(overflow) ����

	//unsigned�� ���̸� 0 ~ 255(����� ǥ����)�� ��ȯ��
	//short(2����Ʈ- 16��Ʈ) : -32768~32767
	unsigned char value3 = 128; 
	short value4 = 128;

	printf("%d\n", value3); //128
	printf("%d\n", value4); //128

	printf("===== ������ �ڷ��� =====\n");
	//int(4����Ʈ, 32��Ʈ) : -21��4õ ~ 21��4õ
	int iNum = 2100000000;
	int iNum2 = 2200000000;

	printf("%d\n", iNum);
	printf("%d\n", iNum2); //���� �ʰ�(overflow) ����

	//long(4����Ʈ), long long(8byte) - 2�� 63��
	long lNum = 2200000000L;
	long long llNum = 2200000000L;

	printf("%ld\n", lNum); //���� �ʰ�(overflow) ����
	printf("%lld\n", llNum);

	printf("===== �Ǽ��� �ڷ��� =====\n");
	//float(4byte) - �Ҽ� 6° �ڸ����� ���
	//double(8byte)- �Ҽ� 15° �ڸ����� ����
	float fNum = 0.1234567F; //���� �ʰ� ���� �߻�
	double dNum = 0.1234567890123456; //���� �ʰ��� ����

	printf("%f\n", fNum);
	printf("%.15lf\n", dNum);

	//���� �̸� �ۼ��� ����(����)
	//float 2fNum = 0.12F; //���ڷ� �����ϸ� �ȵ�
	//double d Num2 = 0.123; //���� �̸��� ������ ������ �ȵ�
	//int if = 100;  //����� �Ǵ� ��ɾ� ��� �Ұ�

	return 0;
}