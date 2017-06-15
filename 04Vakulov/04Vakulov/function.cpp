#include <stdio.h>
#include "header.h"
#include <math.h>


double agm(double a, double b, double acc){

 double buffer = 0;


if(b>a){
	buffer = a;
	a = b;
	b = buffer;
}

while(a-b > acc){
	buffer = a;
	a = (a+b)/2;
	b = sqrt(buffer*b);
}

return a;
}