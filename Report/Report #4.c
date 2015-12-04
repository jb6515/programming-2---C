#include <stdio.h>
#include <stdlib.h>
// Project started at 2015-11-20 Fri
// Programing2 Report 4

int main()
{
	// 변수 선언, 동적할당 초기화
	int size, i, j, count = 0;
	int *arr = NULL;

	// 정수의 갯수를 입력받음
	printf("몇 개의 정수를 입력하시겠습니까? : ");
	scanf("%d", &size);

	// 동적 메모리를 할당함
	arr = malloc(sizeof(int) * size);

	// 입력받은 갯수만큼 정수를 입력받음
	printf("%d개의 정수를 입력하시오.", size);
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	// 중복되지 않은 정수 출력 부분
	printf("중복되지 않은 정수들 : ");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (arr[i] == arr[j]) // 이중for문을 사용하여 중복되는 수일 경우 count증가
				count++;

		}
		if (count == 1) // 중복되는 수가 없을 경우 카운트는 1번 올라간다.(자기 자신과 비교되는 경우의 수 1)
			printf("%d ", arr[i]); // 중복되지 않는 수 출력
		count = 0; // 다음 수를 입력받기 위해서 카운트 초기화
	}

	// 동적 메모리 해제
	free(arr);
	arr = NULL;

	// 프로그램 종료
	return 0;
}