// 2015-09-30 Practice
#include <stdio.h>
// made by irider

int prime(int n);

int main(void)
{
	//���� ����, ���� �ʱ�ȭ
	int num, sum = 0;


	for (num = 1; num <= 100; num++)
	{
		//����
		if (prime(num) == 1)
		{
			printf("%d ", num);
			sum++;
		}
	}
	printf("�Ҽ��� ������ %d�� �Դϴ�.", sum);
	getch();
	return 0;


}

//�Ҽ��Ǻ� �Լ� ����
int prime(int n)
{
	//���� ����, �ʱ�ȭ
	int check = 0, j;

	for (j = 2; j < n; j++)
	{
		if (n%j == 0)
			check++;
	}
	if (check == 0)
		return 1;
	else
		return 0;
}