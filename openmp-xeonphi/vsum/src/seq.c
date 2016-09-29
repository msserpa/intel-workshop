#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#include "sum.h"

void vsum(myfloat *a, myfloat *b, myfloat *c, int n)
{
	int i;
	
	printf("sequential\n");

	__asm__ __volatile__ ("nop\nnop\nnop");
	
	for (i=0; i<n; i++) {
		a[i] = b[i] + c[i];
	}
	
	__asm__ __volatile__ ("nop\nnop\nnop");
}
