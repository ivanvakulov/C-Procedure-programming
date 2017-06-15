//Vakulov Ivan
//10/9/16
#include<cmath>
#include<iostream>
#include"header.h"

using namespace std;

const double eps = 0.00000000000001;

int main(){

	cout<< "Gaus(1) = " <<integ(1) << endl;
	cout<< "Gaus(2) = " <<integ(2) << endl;
	cout<< "Gaus(3) = " <<integ(3) << endl;
	cout<< "Gaus(4) = " <<integ(4) << endl;
	cout<< "Gaus(5) = " <<integ(5) << endl;
	cout<< "Gaus(6) = " <<integ(6) << endl;
	cout<< "Gaus(7) = " <<integ(7) << endl;
	cout<< "Gaus(8) = " <<integ(8) << endl;
	cout<< "Gaus(9) = " <<integ(9) << endl;
	cout<< "Gaus(10) = " <<integ(10) << endl;
	cout<< endl;
	cout<< "supEXP(3.5) = " << superExp(3.5) << " == " << "EXP(3.5) = "<< Exponent(3.5,eps) << endl;
	cout<< "supEXP(7.4) = " << superExp(7.4) << " == " << "EXP(7.4) = "<< Exponent(7.4,eps) << endl;
	cout<< "supEXP(0.43) = " << superExp(0.43) << " == " << "EXP(0.43) = "<< Exponent(0.43,eps) << endl;
	cout<< "supEXP(1.32) = " << superExp(1.32) << " == " << "EXP(1.32) = "<< Exponent(1.32,eps) << endl;
	cout<< endl;
	cout<< "supEXP(-0.6) = " << superExp(-0.6) << " == " << "EXP(-0.6) = "<< Exponent(-0.6,eps) << endl;
	cout<< "supEXP(-0.123) = " << superExp(-0.123) << " == " << "EXP(-0.123) = "<< Exponent(-0.123,eps) << endl;
	cout<< "supEXP(-20) = " << superExp(-20) << " == " << "EXP(-20) = "<< Exponent(-20,eps) << endl;
	cout<< endl;
	return 0;
}