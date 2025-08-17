#include <stdio.h>
/*
   큐(Queue) -> 원형 큐
    - 배열에서 먼저 들어간 자료를 먼저 꺼냄(FIFO, 선입선출)
	- front : 데이터 꺼낼 위치
	- rear : 데이터 넣을 위치

	원형 큐에서 MAX_QUEUE가 4라면 실제로 저장할 수 있는 원소 개수는 3개이다.
	왜냐하면, front==rear일때 빈 상태와 구분해야하므로 한 칸을 비워진다.
*/

#define MAX_QUEUE 4  //큐의 최대 크기

//전역 변수 선언
int queue[MAX_QUEUE];
int front = 0;
int rear = 0;

void enQueue(int x) {
	if ((rear + 1) % MAX_QUEUE == front) {
		printf("큐가 가득 찼습니다.\n");
		return;
	}
	queue[rear] = x; //뒤에서 데이터 넣기
	rear = (rear + 1) % MAX_QUEUE; //rear를 다음 위치로 이동
	//printf("front=%d, rear=%d, x=%d\n", queue[front], queue[rear], x);
	printf("%d ", x);
}

int deQueue() {
	if (front == rear) {
		printf("큐가 가득 찼습니다.\n");
		return -1;
	}
	int data = queue[front];  //앞(front) 데이터를 저장
	front = (front + 1) % MAX_QUEUE;  //front 다음 위치로 이동
	return data;  //데이터를 내보냄
}

int main()
{
	puts("=== 큐에 데이터 넣기 ===");
	enQueue(10);
	enQueue(20);
	enQueue(30);
	//enQueue(40);  //오류, 큐가 가득 참

	puts("\n=== 큐에서 데이터 꺼내기 ===");
	int value;  //큐에서 꺼낸 값(데이터)
	while (front != rear) {
		value = deQueue();
		printf("%d ", value);
	}

	return 0;
}