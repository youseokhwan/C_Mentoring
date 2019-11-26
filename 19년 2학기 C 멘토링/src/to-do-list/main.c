#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "edit.h"
#include "task.h"

void printMenu();
void selectMenu(struct Task* ptr);

int lastIndex = 0;

int main() {
	struct Task task[200];

	while(1) {
		system("cls");
		printMenu();
		selectMenu(task);
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

void selectMenu(struct Task* ptr) {
	int num = 0;

	printf("선택: ");
	scanf_s("%d", &num);

	system("cls");

	switch(num) {
		case 1:
			printList(ptr);
			break;
		case 2:
			addTask(ptr);
			break;
		case 3:
			removeTask(ptr);
			break;
		case 4:
			printf("종료합니다.\n");
			exit(0);
	}
}