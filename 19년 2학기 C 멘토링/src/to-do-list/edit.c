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
	int index;

	printf("[3. ����]\n");
	
	printf("������ ��ȣ: ");
	scanf_s("%d", &index);

	lastIndex--;
	for(int i = index-1; i < lastIndex; i++) {
		ptr[i].num = ptr[i+1].num;
		ptr[i].isVital = ptr[i+1].isVital;
		strcpy_s(ptr[i].content, sizeof(ptr[i].content), ptr[i+1].content);
	}

	printf("�����Ǿ����ϴ�.\n");
}