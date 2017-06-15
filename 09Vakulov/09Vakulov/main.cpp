//Vakulov Ivan
//11/20/2016
#include<iostream>
#include<cmath>
#include"header.h"

using namespace std;

double sinx(double x) { 
	return sin(x)-x; 
}
double ln1(double x) { 
	return log(x)-1; 
}
double expx(double x) { 
	return exp(x)-2+x; 
}
int main(void){
	const double EPS = 0.00000000001;
	const double PI =  3.14159265358979323846;
	cout<<"sin(x) = 0, [PI-1, PI] : ";
	cout<<dichotomy(sin,PI/2,3*PI/2,EPS)<<endl<<endl;
	cout<<"sin(x) = x, [-1, 1] : ";
	cout<<dichotomy(sinx,-1.0,1.0,EPS)<<endl<<endl;
	cout<<"exp(x) = 2-x, [0, 2] : ";
	cout<<dichotomy(expx,0.0,2.0,EPS)<<endl<<endl;
	cout<<"ln(x) = 1, [2, 3] : ";
	cout<<dichotomy(ln1,2.0,3.0,EPS)<<endl<<endl;
	
	return 0;
}
