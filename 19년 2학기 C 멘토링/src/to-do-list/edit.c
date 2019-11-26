#include "edit.h"

void addTask(struct Task* ptr) {
	char content[200];
	int isVital;

	printf("[2. 추가]\n");

	printf("* 내용 입력: ");
	scanf_s(" %[^\n]s", content, sizeof(content));

	printf("* 중요 여부(0 or 1): ");
	scanf_s("%d", &isVital);
	
	ptr[lastIndex].num = lastIndex;
	ptr[lastIndex].isVital = isVital;
	strcpy_s(ptr[lastIndex].content, sizeof(content), content);

	printf("추가되었습니다.\n");

	lastIndex++;
}

void removeTask(struct Task* ptr) {
	printf("removeTask()\n");
}