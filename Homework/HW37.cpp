#include <stdio.h>

int main()
{
	int i, j = 0;
	i = 1; 

	while (i <= 100)
	{
		
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%4d", i);
		}
		else if (i % 3 == 0)
		{
			printf("%4c", '*');
		}
		else if (i % 5 == 0)
		{
			printf("%4c",'#');
		}
		else
		{
			printf("%4d", i);
		}
			j++;
			if (j % 10 == 0)
			{
			printf("\n");
			}
		i++;
	}
	return 0;
}