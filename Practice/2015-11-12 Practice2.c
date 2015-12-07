#include <stdio.h>
#include <math.h>

struct point
{
	int x, y;
};
typedef struct point POINT;
struct line
{
	POINT start;
	POINT end;
};

double distance(int x1, int y1, int x2, int y2);
int main(void)
{
	struct line aline[3];
	int i;
	double d;
	int sx, sy, ex, ey;

	for (i = 0; i < 3; i++)
	{
		scanf("%d %d %d %d", &aline[i].start.x, &aline[i].start.y, &aline[i].end.x, &aline[i].end.y);
	}

	sx = aline[0].start.x;
	sy = aline[0].start.y;
	ex = aline[0].end.x;
	ey = aline[0].end.y;
	d = distance(aline[0].start.x, aline[0].start.y, aline[0].end.x, aline[0].end.y);


	for (i = 0; i < 3; i++)
	{
		if (d < distance(aline[i].start.x, aline[i].start.y, aline[i].end.x, aline[i].end.y))
		{
			sx = aline[i].start.x;
			sy = aline[i].start.y;
			ex = aline[i].end.x;
			ey = aline[i].end.y;
			d = distance(aline[i].start.x, aline[i].start.y, aline[i].end.x, aline[i].end.y);
		}
	}

	printf("%lf", d);

	return 0;
}

double distance(int x1, int y1, int x2, int y2)
{
	double d;
	d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	return d;
}