#include <stdio.h>
/*
   스택(Stack)
   - 먼저 저장한 자료를 나중에 꺼내는 자료구조
   - LIFO(Last In First Out)
   - 스택메모리, 게임 무르기 등 사용
*/
//배열 기반의 스택 정의
#define MAX_LEN 4  //스택의 최대 크기

//전역 변수
int stack[MAX_LEN]; //정수형 자료를 저장할 스택 선언
int top = -1; //저장된 자료가 없는 초기화 상태

//스택에 요소 추가
void push(int x) { //top = 0 ~ 3
	if (top >= MAX_LEN - 1) {
		printf("스택이 가득 찼습니다. %d\n", x);
	}
	else {
		stack[++top] = x; //선 증가
	}
}

//스택에서 요소 제거
int pop() {
	if (top < 0) {
		printf("스택이 비어 있습니다.\n");
		return -1;
	}
	else {
		return stack[top--];
	}
}

//현재 스택 출력 함수
void printStack() {
	printf("\n현재 스택의 상태:\n");
	if (top == -1) {
		printf("(비어 있음)\n");
	} 
	else {
		printf("남은 요소의 수: %d\n", top + 1);
		for (int i = 0; i <= top; i++) {
			printf("%d\n", stack[i]);
		}
	}
}


int main()
{
	//값 추가(80 - 70 - 95 - 85)
	push(80); //0번 인덱스
	push(70); //1
	push(95); //2
	push(85); //3
	//push(100); //초과 입력시 실패
	
	//값 제거(85 - 95 - 70 - 80)
	pop(); 
	pop();
	pop();
	//pop();
	//pop(); //빈 상태에서 pop() 시도함

	//스택의 상태 출력 
	printStack();

	return 0;
}