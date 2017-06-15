
#include <stdio.h>
#include "header.h"
#include <math.h>

int main(){
	double a = 0, b = 0, acc = 0;


	for(int i=1; i<100; i=i+10){
		a = i;
		b = (i*i)/sqrt(float(i));
		printf("for a = %g, b = %g, Agm == %g\n", a, b, agm(a, b, 0.0001));
	}


return 0;
}
