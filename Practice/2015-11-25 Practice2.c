#include <stdio.h>
#include <stdlib.h>
// 2015-11-25 Practice2
// visual studio �Ű����� ���� �ǽ�
// ������Ʈ �޴� - ������Ʈ�̸��� �Ӽ� - ���� �Ӽ��� ����� <��� �μ�>

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
	printf("�հ� = %d\n", sum);
	printf("��� = %d", aver);
}