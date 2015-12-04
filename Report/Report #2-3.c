#include <stdio.h>
#pragma warning(disable:4996)
// Project started at 2015-10-12 Mon PM 07:37
// by IRider
// Programming2 report2-3

int main()
{
	// 변수 설정
	int arr1[2][3] = { { 4,5,1 },{ -3, 2, -4 } };
	int arr2[3][2] = { { 3,3 },{ 7,-5 },{ 4,2 } };
	int arr3[2][2];
	int row, col, row2, sum;

	// 행렬의 곱셈 연산시작
	for (row = 0; row < 2; row++)
	{
		for (row2 = 0; row2 < 2; row2++)
		{
			sum = 0;
			for (col = 0; col < 3; col++)
			{
				sum += arr1[row][col] * arr2[col][row2];
			}
			arr3[row2][row] = sum;
		}
	}

	// 연산을 마친 행렬을 출력
	for (row = 0; row < 2; row++)
	{
		for (col = 0; col < 2; col++)
		{
			printf("%d ", arr3[row][col]);
		}
		printf("\n"); //행렬로 나누기 위해서 개행문자를 사용
	}
	return 0;
}