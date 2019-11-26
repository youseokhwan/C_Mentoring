#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "edit.h"

void printMenu();
void selectMenu();

int main() {
	while(1) {
		system("cls");
		printMenu();
		selectMenu();
		system("pause");
	}

	return 0;
}

void printMenu() {
	printf("[To Do List App!!]\n");
	printf("1. ��ȸ\n");
	printf("2. �߰�\n");
	printf("3. ����\n");
	printf("4. ����\n");
}

void selectMenu() {
	int num = 0;

	printf("����: ");
	scanf_s("%d", &num);

	system("cls");

	switch(num) {
		case 1:
			printList();
			break;
		case 2:
			addTask();
			break;
		case 3:
			removeTask();
			break;
		case 4:
			printf("�����մϴ�.\n");
			exit(0);
	}
}