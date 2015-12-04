#include <stdio.h>
#include <stdlib.h>
// 2015-11-25 Practice2
// visual studio 매개변수 설정 실습
// 프로젝트 메뉴 - 프로젝트이름의 속성 - 구성 속성의 디버깅 <명령 인수>

int main(int argc, char* argv[])
{
	int i, sum, aver;
	sum = 0;
	aver = 0;


	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);

	}
	for (i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);
	aver = sum / (argc - 1);
	printf("합계 = %d\n", sum);
	printf("평균 = %d", aver);
}