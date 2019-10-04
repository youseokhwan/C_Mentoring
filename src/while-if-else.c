#include <stdio.h>
int main( ) {
	int num = 1;
	while(num <= 10) {
		printf("%d는 ", num);
		if(num % 2 == 0)
			printf("짝수입니다.\n");
		else
			printf("홀수입니다.\n");
		num++;
	}
}