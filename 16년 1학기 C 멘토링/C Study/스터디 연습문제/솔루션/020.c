//// 20번 - 세 좌표를 입력받아 그 세 좌표가 일직선 상에 있는지 판별하고 각 기울기를 출력하는 프로그램을 구현하시오.
//// (기울기 - (x1, y1), (x2, y2) 기준으로 (y2-y1)/(x2-x1))
//#include <stdio.h>
//int main( )
//{
//	double x1, y1, x2, y2, x3, y3; // 각 점들의 좌표
//	double gradient1, gradient2; // 각 점의 기울기들
//
//	printf("(x1, y1)의 좌표 입력: ");
//	scanf("%lf %lf", &x1, &y1);
//
//	printf("(x2, y2)의 좌표 입력: ");
//	scanf("%lf %lf", &x2, &y2);
//
//	printf("(x3, y3)의 좌표 입력: ");
//	scanf("%lf %lf", &x3, &y3);
//
//	gradient1 = (y2-y1)/(x2-x1);
//	gradient2 = (y3-y2)/(x3-x2);
//
//	printf("각 점의 기울기: %lf %lf\n", gradient1, gradient2);
//
//	if(gradient1==gradient2)
//		printf("일직선 상에 있음\n");
//	else
//		printf("일직선 상에 있지 않음\n");
//}