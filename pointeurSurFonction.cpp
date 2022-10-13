
#include <stdio.h>
#include <stdlib.h>

void fonction1(int *tab1)
{
	tab1 = malloc(5*sizeof(int));
	for(int i = 0 ; i < 5 ; i++)
		*(tab1+i) = 0;
    
    printf("%d", *(tab1+4));
}

void (*ptrSurFct)(int *);

int main()
{
	int *tab1 = NULL;
	ptrSurFct = &fonction1;
	(*ptrSurFct)(tab1);
	
	return 0;
}

