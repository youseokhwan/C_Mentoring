#include "calc.h"

void printMenu( ) {
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("����: ");
}

void add(int* a, int* b) {
	printf("a b �Է�(�������� ����): ");
	scanf_s("%d %d", a, b);
	printf("%d\n", *a + *b);
}

void sub(int* a, int* b) {
	printf("a b �Է�(�������� ����): ");
	scanf_s("%d %d", a, b);
	printf("%d\n", *a - *b);
}
