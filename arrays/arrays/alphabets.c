#include <stdio.h>

int main()
{
	char data = 'a';

	//�ƽ�Ű�ڵ� 'a' - 97
	data++; //data = data + 1; //98
	//printf("%c\n", data); //b

	data++;
	//printf("%c\n", data); //c

	//���ĺ� �ҹ��ڸ� ������ �迭 ����
	char alphabets[26];
	char ch = 'a';
	int i;  

	//�迭�� ����
	for (i = 0; i < 26; i++) {
		alphabets[i] = ch;
		ch++;
	}
	
	//��ü ���
	for (i = 0; i < 26; i++) {
		printf("%c, %d\n", alphabets[i], alphabets[i]);
	}



	return 0;
}