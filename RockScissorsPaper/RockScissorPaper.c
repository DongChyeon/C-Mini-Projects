#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char user[5];	// ������ �Է��� �� ����
	char com[5];	// ��ǻ�Ͱ� �� ��� ����
	int answer;		// 1~3������ ���� ����

	while (1) {
		answer = rand() % (3 - 1 + 1) + 1;	// 1~3������ ���� �߻�
		switch (answer) {
		case 1:
			strcpy(com, "����");
			break;
		case 2:
			strcpy(com, "����");
			break;
		case 3:
			strcpy(com, "��");
			break;
		}

		do {
			printf("����, ����, �� �߿� ������ ���� �ǰ���?\n(���Ḧ �Է��� �� ������ ����˴ϴ�.)\n�Է� : ");
			scanf("%s", user);
		} while (strcmp(user, "����") && strcmp(user, "����") && strcmp(user, "��") && strcmp(user, "����"));	// ���� ó��
		if (!strcmp(user, "����")) break;	// ���� �Ͻ� while�� Ż��
		printf("������ %s�� �°� ��ǻ�ʹ� %s�� �½��ϴ�.\n", user, com);

		if (!strcmp(user, "����")) {
			if (!strcmp(com, "����")) {
				printf("���º��Դϴ�.\n");
			}
			else if (!strcmp(com, "����")) {
				printf("��ǻ�Ͱ� �̰���ϴ�.\n");
			}
			else if (!strcmp(com, "��")) {
				printf("������ �̰���ϴ�.\n");
			}
		}
		else if (!strcmp(user, "����")) {
			if (!strcmp(com, "����")) {
				printf("������ �̰���ϴ�.\n");
			}
			else if (!strcmp(com, "����")) {
				printf("���º��Դϴ�.\n");
			}
			else if (!strcmp(com, "��")) {
				printf("��ǻ�Ͱ� �̰���ϴ�.\n");
			}
		}
		if (!strcmp(user, "��")) {
			if (!strcmp(com, "����")) {
				printf("��ǻ�Ͱ� �̰���ϴ�.\n");
			}
			else if (!strcmp(com, "����")) {
				printf("������ �̰���ϴ�.\n");
			}
			else if (!strcmp(com, "��")) {
				printf("���º��Դϴ�.\n");
			}
		}
		printf("\n");
	}	// �º� ó��

	return 0;
}