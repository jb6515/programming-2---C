#include <stdio.h>
// Project started at 2015-11-4 Wed
// Programming 2 Report 3-1

// 문자열의 길이를 반환하는 length함수 선언
int length(char *p);

// main함수
int main(void)
{
	// 문자열을 저장할 문자열 배열 선언
	char c[1024];
	// 문자열을 입력받는 입력부
	gets(c);
	// 문자열을 출력하는 출력부
	printf("입력한 문자열 : %s \n입력한 문자열의 수 : %d\n", c, length(c)); // 입력한 문자열을 출력하고, length로 입력한 문자열의 길이를 출력

															  // 프로그램 종료
	return 0;
}
// length 함수 정의
int length(char *p)
{
	// 변수 선언
	int i, count = 0; // for문을 위한 변수 i 선언, 문자열의 길이를 카운트하는 변수 count 선언 및 초기화
					  // '\0'가 나올 때까지 문자열이 나올 때마다 count를 1씩 증가시킴
	for (i = 0; *(p + i) != '\0'; i++)
		count++;
	// count값 반환
	return count;
}