#include <stdio.h>

int main()
{
	//1���� �迭 - ���ڿ� ����
	char word[] = "cloud";
	printf("%s\n", word);

	//2���� �迭 - ���ڿ� ����
	//words[�ܾ��� ����][�ִ� ������ ��]
	//�� �ε����� ���� ����, ���� �ε����� �ݵ�� ���� �����
	char words[][10] = {"sun", "moon", "mountain"};
	//char* words[] = {"sun", "moon", "mountain"};

	//Ư�� �ܾ� �˻�
	/*printf("%s\n", words[0]);
	printf("%s\n", words[1]);
	printf("%s\n", words[2]);*/

	int size = sizeof(words) / sizeof(words[0]);

	//��ü �ܾ� ���
	for (int i = 0; i < size; i++) {
		printf("%s\n", words[i]);
	}
	printf("\n");

	//��� ��ü�� ���ڷ� ���
	for (int i = 0; i < size; i++) {
		for (int j = 0; words[i][j] != NULL; j++) {
			printf("%c", words[i][j]);
		}
		printf("\n");
	}

	return 0;
}