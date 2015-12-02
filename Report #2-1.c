#include <stdio.h>
#pragma warning(disable:4996)
// Project started at 2015-10-7 Wed PM 06:19
// Programming2 Report2-1
int main(void)
{
	// 변수 설정 및 초기화
	int i, j, t, num[100], temp;
	t = 0;

	// for문 무한루프
	for (;;)
	{
		printf("정렬할 정수의 수를 입력(종료시 -1을 입력): ");

		// 정수를 입력받음
		scanf("%d", &t);

		// 입력된 정수가 -1일 경우 break문으로 프로그램 종료
		if (t == -1)
		{
			printf("프로그램을 종료합니다.");
			break;
		}

		// -1이 아닌 정수를 받았을 경우 정렬할 정수를 입력받음
		printf("%d개의 수를 차례로 입력하시오 : ", t);
		for (i = 0; i < t; i++)
		{
			scanf("%d", &num[i]);
		}

		// 입력받은 정수를 정렬함
		for (i = 0; i < t - 1; i++)
		{
			for (j = i + 1; j < t; j++)
			{
				if (num[i] > num[j])
				{
					temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		}

		//정렬의 결과를 출력함
		printf("정렬의 결과 :");
		for (i = 0; i < t; i++)
			printf("%d ", num[i]);
		printf("\n");
	}

	return 0;
}
