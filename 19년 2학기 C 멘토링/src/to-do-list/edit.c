#include "edit.h"

void addTask(struct Task* ptr) {
	char content[200];
	int isVital;

	printf("[2. �߰�]\n");

	printf("* ���� �Է�: ");
	scanf_s(" %[^\n]s", content, sizeof(content));

	printf("* �߿� ����(0 or 1): ");
	scanf_s("%d", &isVital);
	
	ptr[lastIndex].num = lastIndex;
	ptr[lastIndex].isVital = isVital;
	strcpy_s(ptr[lastIndex].content, sizeof(content), content);

	printf("�߰��Ǿ����ϴ�.\n");

	lastIndex++;
}

void removeTask(struct Task* ptr) {
	printf("removeTask()\n");
}