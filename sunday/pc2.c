#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
	char seq[ 1000 ];
	int len;
	char i;
	int c=0;


	printf("Enter the protein sequence: ");
	while(1)
	{

	scanf("%s", seq);
	len = strlen( seq );
	printf("The length was: %d\n", len);

	for( i=0 ; i < len ; i++)
	{
		if( seq[ i ] == 'K' || seq[ i ] == 'R' )
		{
			c++;
		}
		if( seq[ i ] == 'D' || seq[ i ] == 'E')
		{
			c--;
		}
	}

	printf("The total charge is: %d\n", c);
	c = 0;
	}

}

