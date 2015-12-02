#include <stdio.h>
// 수 맞추기 게임

int main(void)
{
	//변수 설정
	int ans, ip, try_num;
	ans = 55; // 정답 설정

	printf("수 알아 맞추기 게임\n");
	printf("수를 입력하시오.\n");
	scanf("%d", &ip); // 수를 입력받음
	try_num = 1; // 시도 횟수 1번으로 설정 

	for (;;) // for문 무한 루프
	{
		if (ans > ip) // 입력 수가 정답보다 클 경우
		{
			try_num += 1; // 시도 횟수 증가
			printf("더 큰 수를 입력하시오 : ");
			scanf("%d", &ip);
		}
		else if (ans < ip) // 입력 수가 정답보다 작을 경우
		{
			try_num += 1; // 시도 횟수 증가
			printf("더 작은 수를 입력하시오 : ");
			scanf("%d", &ip);
		}
		else if (ip == ans) // 입력 수가 정답이랑 같을 경우
		{
			printf("맞습니다. 시행횟수는 %d번입니다.", try_num); // 시도 횟수를 출력
			break; // for문 종료
		}
		else // 혹시나 예외의 경우 에러메시지를 출력함
		{
			printf("에러! 프로그램을 종료합니다.");
			break;
		}
	}

	
	return 0;

}
