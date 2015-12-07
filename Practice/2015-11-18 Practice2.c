#include <stdio.h>
#include <stdlib.h>
int Compare(const void *e1, const void *e2)
{
	int *p1 = (int*)e1;
	int *p2 = (int*)e2;
	return (*p1 - *p2);
}

int main()
{
	int size, sum = 0, i;
	int *arr = NULL;
	double average = 0.0;

	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�? :");
	scanf("%d", &size);

	arr = malloc(sizeof(int) * size);

	printf("%d���� ������ �Է��Ͻÿ�", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, size, sizeof(int), Compare);

	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);


	free(arr);
	arr = NULL;

	return 0;
}