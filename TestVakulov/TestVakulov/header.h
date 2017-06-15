int second(int x, int n);
double third(int n);
int fourth(int n);
unsigned int seventh(unsigned int a);
//seventh second
union Word 
{ 
unsigned int _k; 
struct Bytes4 
{ 
unsigned int _byte1 : 8; 
unsigned int _byte2 : 8; 
unsigned int _byte3 : 8; 
unsigned int _byte4 : 8; 
} _word; 

unsigned int swab() 
{ 
unsigned int tmp = _word._byte1; 
_word._byte1 = _word._byte4; 
_word._byte4 = tmp; 

tmp = _word._byte2; 
_word._byte2 = _word._byte3; 
_word._byte3 = tmp; 
return _k; 
} 
};
//fifth,sixth
struct Matrix 
{ 
double _11, _12, _13, _21, _22, _23, _31, _32, _33; 
};
int fifth(const unsigned int &n);
int sixth(const unsigned int &n);
//eigth,ninth
struct Polinom 
{ 
int _n; 
double* a; 
}; 
const Polinom operator+(const Polinom & u, const Polinom & v); 
const Polinom operator*(const Polinom & u, const double & v); 
//tenth
template <typename T> 
struct myVect { 
size_t VectorSize; 
T *arr; 
}; 
template <typename T> 
void insertionSort(T * arr, unsigned int); 
void Vector10();