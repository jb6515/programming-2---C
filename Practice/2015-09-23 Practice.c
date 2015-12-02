// 2015-09-23 programming2 practice
#include <stdio.h>

int main(void)
{
	int a, i, j;
	scanf("%d", &a);
		for (i = 1; i <= a; i++)
		{
			for (j = 1; j <= i; j++) {
				printf("%d\t", a);
			}
			printf("\n");
		}
	return 0;
}