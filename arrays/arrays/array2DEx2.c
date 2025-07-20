#include <stdio.h>

int main()
{
	//1차원 배열 - 문자열 저장
	char word[] = "cloud";
	printf("%s\n", word);

	//2차원 배열 - 문자열 저장
	//words[단어의 개수][최대 문자의 수]
	//앞 인덱스는 생략 가능, 뒤의 인덱스는 반드시 값을 줘야함
	char words[][10] = {"sun", "moon", "mountain"};
	//char* words[] = {"sun", "moon", "mountain"};

	//특정 단어 검색
	/*printf("%s\n", words[0]);
	printf("%s\n", words[1]);
	printf("%s\n", words[2]);*/

	int size = sizeof(words) / sizeof(words[0]);

	//전체 단어 출력
	for (int i = 0; i < size; i++) {
		printf("%s\n", words[i]);
	}
	printf("\n");

	//요소 전체를 문자로 출력
	for (int i = 0; i < size; i++) {
		for (int j = 0; words[i][j] != NULL; j++) {
			printf("%c", words[i][j]);
		}
		printf("\n");
	}

	return 0;
}