#include <stdio.h>
// 2015-11-25 Practice1
// 배열의 크기를 동적할당으로 받아서, 배열을 입력하고, 입력된 배열 중 가장 큰 배열의 수와 인덱스를 출력하는 프로그램

int maxnum(int* a[], int size);
int main(void)
{
	int i, size;
	int* arr = NULL;
	printf("배열의 크기를 입력 : ");
	scanf("%d", &size);

	arr = malloc(sizeof(int)*size);

	printf("정수 입력 : ");
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	printf("%d %d", arr[maxnum(arr, size)], maxnum(arr, size));

	free(arr);
	arr = NULL;
	return 0;
}
int maxnum(int* a[], int size)
{
	int b = 0, i, c;
	for (i = 0; i < size; i++)
	{
		if (a[i] > b)
		{
			b = a[i];
			c = i;
		}
	}

	return c;
}