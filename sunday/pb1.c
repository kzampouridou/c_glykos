#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char seq[ 1000 ];
	int len;
	char i;
	int gc=0;


	printf("Enter the sequence: ");
	scanf("%s", seq);
	len = strlen( seq );
	printf("The length was: %d\n", len);

	for( i=0 ; i < len ; i++)
	{
		if( seq[ i ] == 'G' || seq[ i ] == 'C' )
		{
			gc++;
		}
	}

	printf("The GC content is: %f\n", gc*100.0/len);


}

