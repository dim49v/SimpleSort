#include"Header.h"
#include<iostream>
using namespace std;



int main(){
	cout << "Array (0 to " << RAND_MAX << ")" << endl;
	int size = 1000;
	int* arr = new int[size];

	for (int i = 0; i < size; i++){
		arr[i] = rand();
	}
	if (!sortTest(arr, size)){
		//sortExchange(arr, size);
		//sortInsertion(arr, size);
		//sortSelection(arr, size);
	}
	cout << sortTest(arr, size) << endl;
	system("pause");
}