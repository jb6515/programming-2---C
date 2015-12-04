#include <stdio.h>
#include <math.h>
// Project started at 2015-11-4 Wed
// Programming2 Report 3-2

// 구조체 선언
struct point
{
	int  x, y;
};

double distance(int x1, int x2, int y1, int y2); // 두 점 사이의 거리를 리턴해주는 distance 함수 정의

												 // 메인함수 정의
int main(void)
{
	// 변수 선언
	int i, j; // for문을 위한 i,j 변수 선언
	int x1, x2, y1, y2; // 가장 가까운 두 점을 저장할 변수
	double d; // 가장 가까운 두 점 사이의 거리를 저장할 변수

	struct point p[5]; // 구조체 생성 5개

					   // 반복문으로 5개의 점을 입력
	for (i = 0; i < 5; i++)
	{
		printf("%d번째 x와 y좌표를 입력하시오 (예시)10 3\n", i + 1);
		scanf("%d %d", &p[i].x, &p[i].y);
	}

	// 비교를 하기 위해서 초기값을 준다.
	x1 = p[0].x;
	y1 = p[0].y;
	x2 = p[1].x;
	y2 = p[1].y;
	d = distance(x1, y1, x2, y2);

	// 이중 for문
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (d > distance(p[i].x, p[i].y, p[j].x, p[j].y)) // 거리가 가까울 경우
			{
				// 각 변수의 값을 대입
				x1 = p[i].x;
				y1 = p[i].y;
				x2 = p[j].x;
				y2 = p[j].y;
				d = distance(p[i].x, p[i].y, p[j].x, p[j].y);
			}
		}
	}

	// 출력부
	printf("가장 가까운 두 좌표는 (%d,%d)와 (%d,%d)이고 거리는 %lf입니다.", x1, y1, x2, y2, d);

	// 프로그램 종료
	return 0;
}

// distance 함수 정의
double distance(int x1, int y1, int x2, int y2)
{
	double d; // 소숫점까지 표현하기 위해서 double형으로 선언
	d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); // (x1과 x2 사이의 거리에 제곱)+(y1과 y2 사이의 거리에 제곱) 두 값을 더한후 루트값을 연산해주는 sqrt를 사용하여 d에 대입
	return d; // d 값을 리턴
}