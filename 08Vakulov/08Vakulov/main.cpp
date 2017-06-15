//Vakulov Ivan
//11/13/2016
#include "header.h"
#include <iostream>
using namespace std;

int main(){
	cout << "=========POW========="<<endl;
	for(unsigned int i = 1;i<9;i++){
		cout <<"3^"<< i << " = " <<power(3,i) << endl;
		cout<<endl;
	}
	cout << "=========FIB========="<<endl;
	for(unsigned int i = 1;i<9;i++){
		cout <<"Recursive Fib for "<< i << " = " <<Fibonaci(i) << endl;
		cout<<endl;
		cout <<"Fast Fib for "<< i << " = " <<Fibonaci(i) << endl;
		cout<<endl;
	}
	return 0;
}