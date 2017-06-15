#include "header.h";
#include <iostream>

using namespace std;

int main(){
	//first
	cout << "Task1" << endl;
	cout << "(x=y)?x:y simplifies to X;" << endl;
	//second
	cout << endl << "Task2" << endl;
	cout << "y = x^2^n + x^2^(n-1)... + x^2 + x;"<< endl<<"For x = 2, n = 1, y = " << second(2,1) << endl;
	cout <<"For x = 5, n = 0, y = " << second(5,0) << endl;
	cout <<"For x = 3, n = 3, y = " << second(3,3) << endl;
	//third
	cout << endl << "Task3" << endl;
	cout << "1+1/2+1/3+1/ ... n+1/n+1;" << endl;
	cout << "For n = 2, answer = " << third(2) << endl;
	cout << "For n = 4, answer = " << third(4) << endl;
	cout << "For n = 10, answer = " << third(10) << endl;
	cout << "For n = 1000, answer = " << third(1000) << endl;
	//fourth
	cout << endl << "Task4 (Simple function)" << endl;
	cout << "a(n) = -2a(n-1) + a(n-2) + 2a(n-3);" << endl;
	cout << "a(1) = " << fourth(1) << endl; 
	cout << "a(3) = " << fourth(3) << endl; 
	cout << "a(6) = " << fourth(6) << endl; 
	cout << "a(12) = " << fourth(12) << endl; 
	//fifth
	cout << endl << "Task5 (Fast function)" << endl;
	for(unsigned int i = 1;i<=12;i++){
		const unsigned int n = i;
		cout << "a("<< i <<") = " << fifth(n) << endl;
	}
	
	//sixth
	cout << endl << "Task6 (Fast rec function)" << endl;
	for(unsigned int i = 1;i<=12;i++){
		const unsigned int n = i;
		cout << "a("<< i <<") = " << sixth(n) << endl;
	}
	
	//seventh first
	cout << endl << "Task7 first method for X = 240000" << endl;
	for (int i = 0; i <32; i++){ 
		if (i == 8 || i == 16 || i == 24) cout << " | "; 
		cout << ((240000 >> 31 - i) & 1);
	}
	cout << endl; 
	for (int i = 0; i <32; i++){ 
		if (i == 8 || i == 16 || i == 24) cout << " | "; 
		cout << ((seventh(240000) >> 31 - i) & 1);
	}
	cout << endl;
	//seventh second
	cout << endl << "Task7 second method for X = 240000" << endl;
	Word a;
	a._k = 240000;
	for (int i = 0; i <32; i++){ 
		if (i == 8 || i == 16 || i == 24) cout << " | "; 
		cout << ((a._k >> 31 - i) & 1);
	}
	cout << endl; 
	a.swab();
	for (int i = 0; i <32; i++){ 
		if (i == 8 || i == 16 || i == 24) cout << " | "; 
		cout << ((a._k >> 31 - i) & 1);
	}
	cout << endl; 
	//eighth
	cout << endl << "Task8" << endl;
	Polinom k,l; 
	double n = 5.0; 
	k._n = 7; 
	k.a = new double[k._n]; 
	k.a[0] = 4;  
	k.a[1] = 6; 
	k.a[2] = 2; 
	k.a[3] = 1; 
	k.a[4] = 6; 
	k.a[5] = 7; 
	k.a[6] = 1;
	cout<<endl<<"Polinom - ";
	for(int i = 0 ; i< k._n;i++){ 
		cout<<k.a[i]<< "x^" << i ; 
		if(i != k._n-1){
			cout << " + ";
		}
	}
	l=k*n; 
	cout<<endl<<"Multiply polinom on double value - "<< n <<endl << "Result - "; 
	for(int i = 0 ; i< l._n;i++){ 
		cout<<l.a[i]<< "x^" << i ; 
		if(i != l._n-1){
			cout << " + ";
		}
	}
	//ninth
	cout << endl << endl << "Task9" << endl;
	Polinom x,y,z; 
	x._n=7; 
	y._n=4; 
	x.a=new double[x._n]; 
	y.a=new double[y._n]; 
	x.a[0]=0;
	x.a[1]=6; 
	x.a[2]=2; 
	x.a[3]=1; 
	x.a[4]=6; 
	x.a[5]=7; 
	x.a[6]=1; 
	y.a[0]=3; 
	y.a[1]=5; 
	y.a[2]=6; 
	y.a[3]=3; 
	cout<<endl<<"Polinom 1 - ";
	for(int i = 0 ; i< x._n;i++){ 
		cout<<x.a[i]<< "x^" << i ; 
		if(i != x._n-1){
			cout << " + ";
		}
	}
	cout<<endl<<"Polinom 2 - ";
	for(int i = 0 ; i< y._n;i++){ 
		cout<<y.a[i]<< "x^" << i ; 
		if(i != y._n-1){
			cout << " + ";
		}
	}
	cout<<endl;
	z=x+y;
	cout<<"Adding two polinoms"<<endl; 
	cout<<"Result - ";
	for(int i = 0 ; i< z._n;i++){ 
		cout<<z.a[i]<< "x^" << i ; 
		if(i != z._n-1){
			cout << " + ";
		}
	}
	cout<<endl;
	//tenth
	cout << endl << endl << "Task10" << endl << endl;
	Vector10();
	return 0;
}