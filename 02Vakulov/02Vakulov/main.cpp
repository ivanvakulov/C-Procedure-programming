#include "header.h" 
#include <iostream> 
#include <cmath> 

using namespace std; 

int main(void){ 

	cout << "5^4 = " << Power(5.0, 4) << " == " << pow(5.0, 4) << endl ;
	cout << "0.5^4 = " << Power(0.5, 4) << " == " << pow(0.5, 4) << endl ;
	cout << "7.5^3 = " << Power(7.5, 3) << " == " << pow(7.5, 3) << endl ;
	cout << "8.4^3 = " << Power(8.4, 3) << " == " << pow(8.4, 3) << endl ;
	cout << "0^6 = " << Power(0.0, 6) << " == " << pow(0.0, 6) << endl ;
	cout << "-7.4^2 = " << Power(-7.4, 3) << " == " << pow(-7.4, 3) << endl ;

	return 0;
}