#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char user[5];	// 유저가 입력한 값 저장
	char com[5];	// 컴퓨터가 낼 경우 저장
	int answer;		// 1~3까지의 난수 저장

	while (1) {
		answer = rand() % (3 - 1 + 1) + 1;	// 1~3까지의 난수 발생
		switch (answer) {
		case 1:
			strcpy(com, "가위");
			break;
		case 2:
			strcpy(com, "바위");
			break;
		case 3:
			strcpy(com, "보");
			break;
		}

		do {
			printf("가위, 바위, 보 중에 무엇을 내실 건가요?\n(종료를 입력할 시 게임이 종료됩니다.)\n입력 : ");
			scanf("%s", user);
		} while (strcmp(user, "가위") && strcmp(user, "바위") && strcmp(user, "보") && strcmp(user, "종료"));	// 예외 처리
		if (!strcmp(user, "종료")) break;	// 종료 일시 while문 탈출
		printf("유저는 %s를 냈고 컴퓨터는 %s를 냈습니다.\n", user, com);

		if (!strcmp(user, "가위")) {
			if (!strcmp(com, "가위")) {
				printf("무승부입니다.\n");
			}
			else if (!strcmp(com, "바위")) {
				printf("컴퓨터가 이겼습니다.\n");
			}
			else if (!strcmp(com, "보")) {
				printf("유저가 이겼습니다.\n");
			}
		}
		else if (!strcmp(user, "바위")) {
			if (!strcmp(com, "가위")) {
				printf("유저가 이겼습니다.\n");
			}
			else if (!strcmp(com, "바위")) {
				printf("무승부입니다.\n");
			}
			else if (!strcmp(com, "보")) {
				printf("컴퓨터가 이겼습니다.\n");
			}
		}
		if (!strcmp(user, "보")) {
			if (!strcmp(com, "가위")) {
				printf("컴퓨터가 이겼습니다.\n");
			}
			else if (!strcmp(com, "바위")) {
				printf("유저가 이겼습니다.\n");
			}
			else if (!strcmp(com, "보")) {
				printf("무승부입니다.\n");
			}
		}
		printf("\n");
	}	// 승부 처리

	return 0;
}