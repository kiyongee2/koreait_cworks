#include <stdio.h>
/*
    �̺� �˻�
	- �̹� ���ĵ� �����͸� �¿� �ѷ� ������ ã�� ���� ������
	  �������� ����̴�.
*/

int main()
{
	int low, high, mid;
	int x;  
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	low = 0;  //ù �ε���
	high = 8; //������ �ε���
	x = 8;    //ã����

	//ã�� �ݺ�
	while (low <= high) {
		//�߰� �ε����� �� ���
		mid = (low + high) / 2;
		printf("%d\n", mid); //4 -> 6 -> 7

		if (arr[mid] == x) { //ã��
			printf("%d�� arr[%d]�� �ֽ��ϴ�.\n", x, mid);
			break;
		}
		else if (arr[mid] < x) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	return 0;
}