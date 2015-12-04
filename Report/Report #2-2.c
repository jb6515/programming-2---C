#include <stdio.h>
#pragma warning{disable:4996}
//Project Started at 2015-10-12 Mon PM 08:04
//Programming2 report2-2 by IRider

int main()
{
	//변수설정
	int arr1[2][3] = { { 4,5,1 },{ -3,2,-4 } };
	int arr2[2][3] = { { 3, 7, 4 },{ 3,-5,2 } };
	int arr3[2][3];
	int row, col;

	//행렬의 덧셈 연산
	for (row = 0; row < 2; row++)
	{
		for (col = 0; col < 3; col++)
		{
			// 행렬1과 행렬2를 더한 값을 행렬3에 저장한다
			arr3[row][col] = arr1[row][col] + arr2[row][col];
		}
	}

	//연산된 행렬 출력
	for (row = 0; row < 2; row++)
	{
		for (col = 0; col < 3; col++)
		{
			printf("%d ", arr3[row][col]); //행렬3 출력
		}
		printf("\n"); // 행렬의 줄을 구분하기 위해 개행문자를 추가
	}
	//정상종료로 0을 출력
	return 0;
}