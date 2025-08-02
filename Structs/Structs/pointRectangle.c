#include <stdio.h>
#include <math.h> //���� ���� ���̺귯��
/*
   ��ø ����ü
    - ����: ����ü�� ��� ������ �ٸ� ����ü�� �ڷ����� ���
*/
struct Point {
	//��� ����
	int x;  //���� x��ǥ
	int y;  //���� y��ǥ
};

struct Rectangle {
	//Point ����ü ����(���� ����)
	struct Point p1;
	struct Point p2;
};

int main()
{
	//�� ���� �̿��� �簢�� �����
	//���� ��� ��ǥ, ���� �ϴ� ��ǥ ����
	struct Rectangle rect;
	int width, height; 

	//�Ӽ��� �Է�
	rect.p1.x = 1;
	rect.p1.y = 5;

	rect.p2.x = 4;
	rect.p2.y = 2;

	//�簢�� ���
	printf("��1(%d, %d), ��2(%d, %d)\n",
		rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);

	//�ʺ�� ���� ���
	width = abs(rect.p2.x - rect.p1.x); //abs() -> ���밪
	height = abs(rect.p2.y - rect.p1.y);

	printf("�ʺ�: %d, ����: %d\n", width, height);

	return 0;
}