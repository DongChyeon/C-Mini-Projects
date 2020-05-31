#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int input;	// 유저가 입력한 값
	int answer;	// 실제 답

	printf("랜덤으로 1~99까지의 숫자 중 하나가 생성되었습니다. 맞혀보세요.\n");
	answer = rand() % (99 - 1 + 1) + 1;	// 1~9 까지의 난수 발생

	do {
		printf("1~99까지의 숫자 중 하나를 입력하세요 : ");
		scanf("%d", &input);
		if (input > answer) {
			printf("DOWN\n");
		}
		else if (input < answer) {
			printf("UP\n");
		}
	} while (input != answer);	// 맞출 때까지 진행

	printf("정답을 맞추셨습니다!");

	return 0;
}