// 2015-09-30 Practice
#include <stdio.h>
// made by irider

int prime(int n);

int main(void)
{
	//변수 설정, 변수 초기화
	int num, sum = 0;


	for (num = 1; num <= 100; num++)
	{
		//연산
		if (prime(num) == 1)
		{
			printf("%d ", num);
			sum++;
		}
	}
	printf("소수의 갯수는 %d개 입니다.", sum);
	getch();
	return 0;


}

//소수판별 함수 정의
int prime(int n)
{
	//변수 생성, 초기화
	int check = 0, j;

	for (j = 2; j < n; j++)
	{
		if (n%j == 0)
			check++;
	}
	if (check == 0)
		return 1;
	else
		return 0;
}