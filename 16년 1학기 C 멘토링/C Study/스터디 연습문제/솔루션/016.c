//// 16번 - 자연수를 입력받아 그 자연수가 완전수인지 판별하는 프로그램을 구현하시오.
//// (완전수 - 자신을 제외한 양의 약수들을 모두 합한 값이 자신과 같은 수 ex) 1+2+3=6)
//#include <stdio.h>
//int main( )
//{
//	int num, i; // num은 입력받을 자연수, i는 for문을 돌리기 위한 변수
//	int sum = 0; // 완전수를 판별할 때 사용할 변수
//
//	printf("자연수 입력: ");
//	scanf("%d", &num);
//
//	for(i = 1; i<num; i++)
//		if(num%i==0)
//			sum += i;
//
//	if(num==sum)
//		printf("완전수\n");
//	else
//		printf("완전수가 아님\n");
//}