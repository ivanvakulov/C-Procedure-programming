//Vakulov Ivan
//10/9/16

#include<cmath>
#include<iostream>
#include"header.h"

using namespace std;

const double eps = 0.00000000000001;
const double ep = 2.71828182845904;

double integ(double x) 
{ 
	double sum = 0; 
	double next = x; 
	int k = 1; 
	while(abs(next) > eps) 
	{ 
		sum += next; 
		next *= (-x * x * (2 * (k - 1) + 1)) / (k * (2 * k + 1)); 
		k++; 
	} 
	return sum; 
}
double Power(double a, unsigned int n) {
	double res = 1;
	while (n) {
		if (n & 1)
			res *= a;
		a *= a;
		n >>= 1;
	}
		return res;
} 
double Exponent(double degree, double sensibility){ 
	double result = 0; 
	double member = 1; 
	double n = 1; 
	while (abs(member) > sensibility) 
	{ 
		result += member; 
		member *= degree / n; 
		n++; 
	} 
	return result; 
}
double superExp(double x){
	if(x<0) return 1/( Power(ep, abs(int(x))) * Exponent(abs(x-int(x)), eps) );
	return ( Power(ep, abs(int(x))) * Exponent(abs(x-int(x)), eps) );
}