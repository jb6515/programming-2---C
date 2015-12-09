#include <stdio.h>
#include <string.h>
int main()
{
   char *arr[5];
   char str[5][80];
   char max[80];
   int i;
   for(i=0; i<5; i++)
   {
      gets(str[i]);
      arr[i] = str[i];
   }
   strcpy(max, arr[0]);
   for(i=0; i<5; i++)
   {
      if(strlen(max) < strlen(arr[i]))
         strcpy(max,arr[i]);
   }
   puts(max);
   return 0;
}
