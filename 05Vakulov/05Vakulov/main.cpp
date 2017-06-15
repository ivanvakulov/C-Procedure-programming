//Vakulov Ivan
//10.23.2016
#include "Horner.h"
#include <cassert>
#include <iostream>

using namespace std;

int main(){
	
	double x = 0;

	cout<< "Enter degree of polynomial:" << endl;
	size_t size = 0;
	cin >> size;
	double *coeff = new double [size+1];
	fillArray(coeff, size);

	for(int i = -5;i<=5;i++){
		x = i;
		cout << "\n" << "result with X " << x << " == " << Horner(coeff, size, x) << "\n" << endl;
	}
	return 0;
}