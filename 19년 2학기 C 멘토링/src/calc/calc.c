#include "calc.h"

void printMenu( ) {
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 종료\n");
	printf("선택: ");
}

void add(int* a, int* b) {
	printf("a b 입력(공백으로 구분): ");
	scanf_s("%d %d", a, b);
	printf("%d\n", *a + *b);
}

void sub(int* a, int* b) {
	printf("a b 입력(공백으로 구분): ");
	scanf_s("%d %d", a, b);
	printf("%d\n", *a - *b);
}
