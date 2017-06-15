#include <iostream>
#include <tuple>
#include <string>
#include "header.h"
using namespace std;

int second(int x, int n){
	int res = 0;
	int member = x;
	for(unsigned int i = 0;i<n;i++){
		res+=member;
		member*=member;
	}
	res+=member;
	return res;
}
double third(int n){
	double res = n+1;
	for(unsigned int i = n;i > 0;i--){
		res = i + 1/res;
	}
	return res;
}
int fourth(int n){
	int a1 = -2; 
	int a2 = 6; 
	int a3 = -8; 
	int an;
	switch(n){
	case 1:
		return a1;
		break;
	case 2:
		return a2;
		break;
	case 3:
		return a3;
		break;
	default:
		for(int i=0;i<n-3;i++){ 
			an = -2*a3 + a2 + 2*a1; 
			a1 = a2; 
			a2 = a3; 
			a3 = an; 
		} 
		return an;
	}
}

Matrix& operator *=(Matrix &a, const Matrix &b) { 
	Matrix res; 
	res._11 = a._11 * b._11 + a._12 * b._21 + a._13 * b._31; 
	res._12 = a._11 * b._12 + a._12 * b._22 + a._13 * b._32; 
	res._13 = a._11 * b._13 + a._12 * b._23 + a._13 * b._33; 

	res._21 = a._21 * b._11 + a._22 * b._21 + a._23 * b._31; 
	res._22 = a._21 * b._12 + a._22 * b._22 + a._23 * b._32; 
	res._23 = a._21 * b._13 + a._22 * b._23 + a._23 * b._33; 

	res._31 = a._31 * b._11 + a._32 * b._21 + a._33 * b._31; 
	res._32 = a._31 * b._12 + a._32 * b._22 + a._33 * b._32; 
	res._33 = a._31 * b._13 + a._32 * b._23 + a._33 * b._33; 
	a = res; 
	return a; 
} 

const Matrix operator *(const Matrix &a, const Matrix &b) { 
	Matrix res = a; 
	return (res *= b); 
}

Matrix FastPower(Matrix x, unsigned int n) { 
	Matrix res = { 1, 0, 0, 0, 1, 0, 0, 0, 1 }; 

	while (n != 1) { 
	if (n % 2 == 1) 
	res *= x; 
	x *= x; 
	n /= 2; 
	} 
	return res*x; 
} 

int fifth(const unsigned int &n) { 
	switch (n) { 
		case 1: return -2; break; 
		case 2: return 6; break; 
		case 3: return -8; break; 
	} 
	const int a1 = -2; 
	const int a2 = 6; 
	const int a3 = -8; 
	int res = 0; 
	Matrix initial_matrix = { -2, 1, 2, 1, 0, 0 ,0 ,1 ,0 }; 
	int target_power = n - 3; 

	Matrix result_matrix = FastPower(initial_matrix, target_power); 

	res = a3 * result_matrix._11 + a2 * result_matrix._12 + a1 * result_matrix._13; 

	return res; 
}

void zet(Matrix &res, Matrix &x, unsigned int &k) { 
	if (k > 0) { 
		if (k % 2 == 1) { 
			res *= x; 
			--k; 
		} else { 
			x *= x; 
			k /= 2; 
		}; 
		zet(res, x, k); 
	} 
}

Matrix fastPowRec(Matrix x, unsigned int n) { 
	Matrix res = { 1, 0, 0, 0, 1, 0, 0, 0, 1 }; 
	zet(res, x, n); 
	return res; 
} 

int sixth(const unsigned int &n) { 
	switch (n) 
	{ 
		case 1: return -2; break; 
		case 2: return 6; break; 
		case 3: return -8; break; 
	} 
	const int a1 = -2; 
	const int a2 = 6; 
	const int a3 = -8; 
	int res(0); 
	Matrix init_m = { -2, 1, 2, 1, 0, 0 ,0 ,1 ,0 }; 
	int pow = n - 3; 

	Matrix res_m = fastPowRec(init_m, pow); 

	res = a3 * res_m._11 + a2 * res_m._12 + a1 * res_m._13; 

	return res; 
} 

unsigned int seventh(unsigned int a){
	unsigned int temp1 = a;
	unsigned int temp2 = a;
	unsigned int temp3 = a;
	unsigned int temp4 = a;
	temp1 >>= 24;
	temp2 <<= 24;
	temp3 >>= 16;
	temp3 <<= 24;
	temp3 >>= 16;
	temp4 <<= 16;
	temp4 >>= 24;
	temp4 <<= 16;
	return (temp1 | temp2) | (temp3 | temp4); 
}

const Polinom operator+(const Polinom & u, const Polinom & v) { 
	if(u._n>=v._n) { 
		for(int i=0; i<v._n;i++) 
			u.a[i]+=v.a[i]; 
		return u; 
	} else { 
		for(int i=0; i<u._n;i++) 
			v.a[i]+=u.a[i]; 
		return v; 
	} 
} 

const Polinom operator*(const Polinom & u, const double & v) { 
	for(int i=0 ; i <= u._n ; i++ ) { 
		u.a[i]*=v; 
	} 
	return u; 
} 
//tenth
template <typename T> 
void insertionSort(T * arr, unsigned int length) {
	unsigned int i, j;
	T tmp;
	for ( i = 1; i < length; i++) {
           j = i;
           while (j > 0 && arr[j - 1] > arr[j]) {
                 tmp = arr[j];
                 arr[j] = arr[j - 1];
                 arr[j - 1] = tmp;
                 j--;
           }
	} 
}

struct Pare { 
	int x; 
	int y; 
}; 

bool operator < (const Pare a, const Pare b){return tie(a.x, a.y) < tie(b.x, b.y);}; 
bool operator > (const Pare& a, const Pare& b) { return b < a; }; 
bool operator <= (const Pare& a, const Pare& b) { return !(b < a); }; 
bool operator >= (const Pare& a, const Pare& b) { return !(a < b); }; 
bool operator == (const Pare& a, const Pare& b) { return !(a < b) && !(a > b); }; 
bool operator != (const Pare& a, const Pare& b) { return (a < b) || (a > b); };

void Vector10() {
	myVect <double> A; 

	A.VectorSize = 15; 
	A.arr = new double[A.VectorSize];

	A.arr[0] = 5.3;
	A.arr[1] = 7.8;
	A.arr[2] = -47;
	A.arr[3] = -8;
	A.arr[4] = -30;
	A.arr[5] = 7.8;
	A.arr[6] = 19;
	A.arr[7] = 9.1;
	A.arr[8] = 90;
	A.arr[9] = 13.4;
	A.arr[10] = 17.2;
	A.arr[11] = 71.8;
	A.arr[12] = 2.1;
	A.arr[13] = 60;
	A.arr[14] = 12.4;

	for (unsigned int i = 0; i < A.VectorSize; i++) {
		cout << A.arr[i];
		if(i!=A.VectorSize-1){
			cout<<", ";
		}
	}
	cout << endl;
	cout <<endl<< "Sorted: "<< endl;
    insertionSort(A.arr, A.VectorSize);

	for (unsigned int i = 0; i < A.VectorSize; i++) {
		cout << A.arr[i];
		if(i!=A.VectorSize-1){
			cout<<", ";
		}
	}
	cout << endl << endl;
	myVect <string> B; 

	B.VectorSize = 5; 
	B.arr = new string[B.VectorSize];

	B.arr[0] = "Ivan";
	B.arr[1] = "Name";
	B.arr[2] = "tired";
	B.arr[3] = "kill";
	B.arr[4] = "sleep";

	for (unsigned int i = 0; i < B.VectorSize; i++) {
		cout << B.arr[i];
		if(i!=B.VectorSize-1){
			cout<<", ";
		}
	}
	cout << endl;
	cout <<endl<< "Sorted: "<< endl;
    insertionSort(B.arr, B.VectorSize);

	for (unsigned int i = 0; i < B.VectorSize; i++) {
		cout << B.arr[i];
		if(i!=B.VectorSize-1){
			cout<<", ";
		}
	}

	myVect <Pare> C; 
	C.VectorSize = 4; 
	C.arr = new Pare[C.VectorSize]; 

	C.arr[0].x = 7; 
	C.arr[1].x = 7; 
	C.arr[2].x = 4; 
	C.arr[3].x = 10; 

    C.arr[0].y = 4; 
	C.arr[1].y = 8; 
	C.arr[2].y = 3; 
	C.arr[3].y = 7; 
	cout << endl;
	cout << endl;
	for(unsigned int i = 0;i < C.VectorSize;i++){ 
		cout << "["<< C.arr[i].x<< "," << C.arr[i].y << "] "; 
	}
    insertionSort(C.arr , C.VectorSize);
	cout << endl;
	cout << endl;
	cout << "Sorted: "<< endl;
	for(unsigned int i = 0;i < C.VectorSize;i++){ 
		cout << "["<< C.arr[i].x<< "," << C.arr[i].y << "] "; 
	}
}
