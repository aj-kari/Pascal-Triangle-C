//AJ Kari
//Print the first 15 Pascal Triangle numbers

#include <stdio.h>

int main()
{
	int i,j,k;

	for(i=0;i<15;i++)
	{
		k=1;
		for(j=0;j<=i;j++)
		{
			printf("%d " ,k);
			k = k * (i - j) / (j + 1);
		}
		printf("\n");
	}
return 0;
}
