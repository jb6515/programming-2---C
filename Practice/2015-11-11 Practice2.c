#include <stdio.h>
#include <math.h>
typedef struct rect {
   int x1, y1;
   int x2, y2;
} RECT;
int SumArea(RECT* rectarr, int n);
int main()
{
   int i;
   RECT rectarr[3];
   for(i=0; i<3; i++)
   {
      scanf("%d %d %d %d",&rectarr[i].x1,&rectarr[i].y1,&rectarr[i].x2,&rectarr[i].y2);
   }
   printf("3개의 사각형 면적의합 : %d",SumArea(&rectarr,3));

   return 0;
}
int SumArea(RECT* rectarr, int n)
{
   int i;
   double area[3],sumarea=0;
   for(i=0; i<n; i++)
   {
      area[i] = abs((rectarr[i].x2-rectarr[i].x1)*(rectarr[i].y2-rectarr[i].y1));
      sumarea += area[i];
   }
   return sumarea;
}
