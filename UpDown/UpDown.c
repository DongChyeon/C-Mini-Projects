#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int input;	// ������ �Է��� ��
	int answer;	// ���� ��

	printf("�������� 1~99������ ���� �� �ϳ��� �����Ǿ����ϴ�. ����������.\n");
	answer = rand() % (99 - 1 + 1) + 1;	// 1~9 ������ ���� �߻�

	do {
		printf("1~99������ ���� �� �ϳ��� �Է��ϼ��� : ");
		scanf("%d", &input);
		if (input > answer) {
			printf("DOWN\n");
		}
		else if (input < answer) {
			printf("UP\n");
		}
	} while (input != answer);	// ���� ������ ����

	printf("������ ���߼̽��ϴ�!");

	return 0;
}