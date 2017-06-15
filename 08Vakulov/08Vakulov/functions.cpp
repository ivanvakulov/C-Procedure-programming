//Vakulov Ivan
//11/13/2016
#include <iostream>
#include "header.h"

using namespace std;

void zet(double &y, double &x, unsigned int &k, unsigned int &repeat)
{
	repeat++;
	if (k>0){
		if (k%2==1){
			y*=x; k--;
		}else{
			x*=x; k/=2;
		}
		zet(y,x,k,repeat);
	}
}

double power(double x, unsigned int n)
{
	//Підраховує кількість викликів
	unsigned int repeat = 0;
	double y =1;
	zet(y, x, n, repeat);
	cout << "Number of calls: "<< repeat << endl;
	return y;
}

void fib(double &f1, double &f2, unsigned int n, unsigned int &repeat) 
{ 
	repeat++; 
	if (n >= 2) { 
		double f = f2; f2 += f1; f1 = f; 
		fib(f1, f2, n - 1, repeat); 
	} 
} 

double Fibonaci(unsigned int n) 
{ 
	// Змiнна repeat пiдраховує к-сть викликiв 
	unsigned int repeat = 0; 
	double f0 = 0, f1 = 1; 
	switch (n) { 
		case 0: 
			cout<< "Number of calls: "<< repeat << endl; 
			return f0; break; 
		case 1: 
			cout<< "Number of calls: "<< repeat << endl; 
			return f1; break; 
		default: 
			fib(f0, f1, n, repeat); 
			cout << "Number of calls: " << repeat << endl; 
			return f1; 
	} 
}

int myFibonacci(unsigned int n) { 
	Matrix2x2 m = { 1, 1, 1, 0 }; 
	Vector2 v = { 0, 1 }; 
	int tmp_1 = 0, tmp_2 = 0, tmp_3 = 0; 
	int repeat = 0; 
	myFib(m, v, n, tmp_1, tmp_2, tmp_3, repeat); 
	cout << "Number of calls: " << repeat <<endl; 
	return v._1;
} 

void myFib(Matrix2x2 &m, Vector2 &v, unsigned int n, int &tmp_1, int &tmp_2, int &tmp_3, int &repeat) { 
	repeat++; 
	if (n & 1) { 
		tmp_1 = v._1; 
		v._1 = v._1 * m._11 + v._2 * m._21; 
		v._2 = tmp_1 * m._12 + v._2 * m._22; 
	} 
	tmp_1 = m._11; 
	tmp_2 = m._12; 
	tmp_3 = m._21; 
	m._11 = m._11 * m._11 + m._12 * m._21; 
	m._12 = tmp_1 * m._12 + m._12 * m._22; 
	m._21 = tmp_1 * m._21 + m._21 * m._22; 
	m._22 = tmp_2 * tmp_3 + m._22 * m._22; 
	if (n != 0) 
		myFib(m, v, n / 2, tmp_1, tmp_2, tmp_3, repeat); 
}