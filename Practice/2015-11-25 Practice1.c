#include <stdio.h>
// 2015-11-25 Practice1
// �迭�� ũ�⸦ �����Ҵ����� �޾Ƽ�, �迭�� �Է��ϰ�, �Էµ� �迭 �� ���� ū �迭�� ���� �ε����� ����ϴ� ���α׷�

int maxnum(int* a[], int size);
int main(void)
{
	int i, size;
	int* arr = NULL;
	printf("�迭�� ũ�⸦ �Է� : ");
	scanf("%d", &size);

	arr = malloc(sizeof(int)*size);

	printf("���� �Է� : ");
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