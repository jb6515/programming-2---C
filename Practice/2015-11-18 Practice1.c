
#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char * arr[5];
	char str[5][80];
	char tde[80];
	for (i = 0; i < 5; i++)
	{
		gets(str[i]);
		arr[i] = str[i];
	}
	strcpy(tde, arr[1]);

	for (i = 0; i < 5; i++)
	{
		if (strlen(tde) < strlen(arr[i]))
			strcpy(tde, arr[i]);
	}

	puts(tde);

	return 0;
}