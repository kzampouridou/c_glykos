#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char seq[ 10000 ];
	int len;
	int i;
	int j;


	printf("Press Ctrl+C to stop!\n");
while(1)
{
	printf("Enter the prokaryotic DNA sequence: ");
	scanf("%s", seq);

	len = strlen( seq );
	printf("The length was: %d\n", len);

	if( len < 6 )
	{
		printf("This sequence is too short!\n");

	}

	for(i=0; i<= len -3; i++)
	{
		if(seq[i] == 'A' && seq[i+1] == 'T' && seq[i+2] == 'G')
		{

			for(j = i+3; j<= len-3; j+= 3)
			{
				if( (seq[j]=='T' && seq[j+1]=='A' && seq[j+2]=='A') ||
                		    (seq[j]=='T' && seq[j+1]=='A' && seq[j+2]=='G') ||
                    		    (seq[j]=='T' && seq[j+1]=='G' && seq[j+2]=='A') )
				{

					printf("Found orf from %d to %d\n", i+1, j+3);
				}


			}
		}
	}
}
}



