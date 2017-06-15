//Vakulov Ivan
//11/20/2016
#include <cassert>
#include<iostream>
#include<math.h>

using namespace std;

double dichotomy(double (* const f)(double), const double a,const double b,const double eps)
{
	double m , fm;
	double fa = f(a),fb = f(b);
	double aa = a,bb = b;
	
	try{ 
		if(fa*fb > 0) 
		throw 1; 
	} catch(int e) {
		cerr<<"Incorrect data!"<<endl;
	};

	while(eps<fabs(aa-bb)){
		m = (aa+bb)/2.0;
		fm = f(m);
		if(fa*fm<0){
			bb = m;fb = fm;
		}else{
			aa = m;fa = fm;
		}
	}

	assert(aa>=a && aa<=b);

	return aa;
}
