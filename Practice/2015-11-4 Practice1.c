#include <stdio.h>
#include <math.h>
struct point
{
	int x, y;
};

int main(void)
{
	int i;
	double distance;
	double d[5];
	int max;
	double x, y, z;

	struct point p[5];

	for (i = 0; i < 5; i++)
	{
		scanf("%d %d", &p[i].x, &p[i].y);
		x = p[i].x;
		y = p[i].y;
		z = (x*x) + (y*y);
		d[i] = sqrt(z);
	}
	distance = d[0];
	for (i = 1; i < 5; i++)
	{
		if (d[i] < distance)
		{
			distance = d[i];
			max = i;
		}
	}

	printf("가장 가까운 좌표는 (%d,%d)", p[max], p[max]);
	printf("거리는 %d", distance);
}
