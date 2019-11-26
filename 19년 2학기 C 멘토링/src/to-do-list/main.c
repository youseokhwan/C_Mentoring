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
	printf("1. 조회\n");
	printf("2. 추가\n");
	printf("3. 삭제\n");
	printf("4. 종료\n");
}

void selectMenu() {
	int num = 0;

	printf("선택: ");
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
			printf("종료합니다.\n");
			exit(0);
	}
}