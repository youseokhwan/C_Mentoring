#include <stdio.h>
int main( ) {
	int num = 1;
	while(num <= 10) {
		printf("%d�� ", num);
		if(num % 2 == 0)
			printf("¦���Դϴ�.\n");
		else
			printf("Ȧ���Դϴ�.\n");
		num++;
	}
}