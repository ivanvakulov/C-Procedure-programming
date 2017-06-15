//Vakulov Ivan
//11/27/2016
#include <cmath>
#include <exception>
#include <iostream>

const double PI = 3.14159;
const double E = 2.71828;


double Simpson(const double a, const double b, double(*const f)(double), const double eps)
{
	int n = 2;
	double h = (b - a) * 0.5;
	double ss = 0;
	double s1 = h * (f(a) + f(b));
	double s2 = 0;
	double s4 = 4 * h * f(a + h);
	double s = s1 + s2 + s4;
	int i = 0;
	do 
	{
		ss = s;
		n *= 2;
		h /= 2;
		s1 *= 0.5;
		s2 = 0.5 * s2 + 0.25 * s4;
		s4 = 0;
		i = 1;
		do {
			s4 = s4 + f(a + i * h);
			i += 2;
		} while (i <= n);
		s4 = 4 * h * s4;
		s = s1 + s2 + s4;
	} while (fabs(s - ss) > eps);
	return s / 3;
}

double Agm(double a, double b, const double eps)
{
	if (a <= 0 || b <= 0)
	{
		throw std::exception("Arguments must be in range of (0 ; +inf)!");
	}
	double a_tmp = 0;
	while (abs(a - b) > eps)
	{
		a_tmp = (a + b) / 2;
		b = sqrt(a * b);
		a = a_tmp;
	}
	return a;
}

double Elliptic(double x)
{
	return 1 /sqrt(pow(5.0,2) * sin(x) * sin(x) + pow(3.0,2) * cos(x) * cos(x));
}

double Dirichlet(double x)
{
	if (x == 0) x = 1.0E-10;
	return sin(-13 * x) / x;
}

double Poisson(double x)
{
	return pow(E, - pow(x, 2.0));
}

double Euler(double x)
{
	if (x == -1) x = 0;
	return pow(x, 0.5 - 1) / (1.0 + x);
}

double sgn(double x)
{
	return x / abs(x);
}