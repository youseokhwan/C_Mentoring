#include "list.h"

void printList(struct Task* ptr) {
	printf("[1. 조회]\n");

	printf("번호\t중요\t내용\n");
	printf("=====================================\n");
	
	for(int i = 0; i < lastIndex; i++) {
		printf("%2d\t", i+1);
		if(ptr[i].isVital == 1)
			printf("★\t");
		else
			printf("  \t");
		printf("%s\n", ptr[i].content);
	}
}