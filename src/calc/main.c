#include <stdio.h>
#include "calc.h"

int main( ) {
	int select;
	int* a, b;

	while(1) {
		printMenu( );
		scanf_s("%d", &select);

		if(select == 1)
			add(&a, &b);
		else if(select == 2)
			sub(&a, &b);
		else {
			printf("종료합니다.\n");
			return 0;
		}
	}
}
