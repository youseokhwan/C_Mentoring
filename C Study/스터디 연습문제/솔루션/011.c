//// 11번 - 정수 세 개를 입력받아 삼각형 성립 조건을 만족하는지 판별하는 프로그램을 구현하시오.
//// (삼각형 성립 조건 - 제일 긴 변의 길이가 나머지 두 변의 합보다 작아야 한다)
//#include <stdio.h>
//int main( )
//{
//	int a, b, c, max; // 삼각형 각각의 변, max는 가장 긴 변
//
//	printf("세 변의 길이 입력: ");
//	scanf("%d %d %d", &a, &b, &c);
//
//	max = a;
//	if(b>max)
//		max = b;
//	if(c>max)
//		max = c;
//
//	if(max<a+b+c-max)
//		printf("성립\n");
//	else
//		printf("성립하지 않음\n");
//}