//Vakulov Ivan
//10/30/2016
#include <iostream>
#include "header.h"

using namespace std;


int main(){
	const size_t size = 5;
	int a[size] = {10,5,3,2,4};
	int *copy = new int[size];
	for(unsigned int i = 0;i<size;i++){
		copy[i] = a[i];
	}

	for(int i = 0;i<size;i++){
		cout << a[i] << " ";
	}
	cout << endl << endl;

	bubble(a,size);

	for(int i = 0;i<size;i++){
		cout << a[i] << " ";
	}
	cout << endl << endl;

	if(checkItems(a, copy, size)){
		cout << "This arrays have the same items!"  << endl << endl;
	}else{
		cout << "This arrays don't have the same items!"  << endl << endl;
	}
	if(checkSort(a, size)){
		cout << "The sort is correct!"  << endl << endl;
	}else{
		cout << "The sort is uncorrect!"  << endl << endl;
	}

	return 0;
}