#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>



int main(int argc, char *argv[]) {
	int e, r;
	
	setlocale (LC_ALL, "Portuguese");
	printf ("POTÊNCIAS DE 3 \n");
	for (e=1; e<=15; e++){
		r = pow(3,e);
		printf("\n 3 ^ %d = %d \n", e, r);
	}
	
	
	
	return 0;
}
