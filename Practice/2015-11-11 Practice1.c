#include <stdio.h>
void getsmall(int* numA, int* numS, int n);
int main()
{
   int numA[6];
   int numS[6];
   int i;
   for(i=0; i<6; i++)
      scanf("%d",&numA[i]);
   getsmall(numA, numS, 6);
   
   for(i=0; i<6; i++)
      printf("%d ",numS[i]);
   return 0;
}
void getsmall(int* numA, int* numS, int n)
{
   int count=0;
   int i,j;
   for(i=0; i<n; i++)
   {
      for(j=0; j<n; j++)
      {
         if(numA[i] > numA[j])
            count++;
      }
      numS[i] = count;
      count = 0;
   }
}
