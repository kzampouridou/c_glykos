#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char seq[ 1000 ];
	int len;


	printf("Enter the protein sequence: ");
	scanf("%s", seq);
	len = strlen( seq );
	if(len < 3)
	{
	printf("Babi eisai mpoumpounas!!\n");
	exit(1);
	}
	if(seq[0] == 'A' && seq[1] == 'T' && seq[2] == 'G')
	{
	printf("It starts with a start codon\n");
	}
	else
	{
	printf("It doesn't start with a start codon\n");
	}
}

