//Vakulov Ivan
//10/30/2016
#include "header.h"
#include <iostream>

using namespace std;

void bubble(int* a, size_t size){
  for (int i = size - 1; i >= 0; i--){
    for (int j = 0; j < i; j++){
      if (a[j] > a[j + 1]){
        int tmp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = tmp;
      }
    }
  }
}

bool checkItems(int* a, int* b, size_t size){
	for(unsigned int i = 0;i<size;i++){
		for(unsigned int j = 0;j<size;j++){
			if(a[i]!=b[j] && j==(size-1)){
				return false;
			}else if(a[i]==b[j]){
				break;
			}
		}
	}
	return true;
}

bool checkSort(int* a, size_t size){
	for(unsigned int i = 0;i<size;i++){
		if(i == (size-1)){
			break;
		}
		if(a[i]>a[i+1]){
			return false;
		}
	}
	return true;
}