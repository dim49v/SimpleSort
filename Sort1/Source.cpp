#include"Header.h"
#include<iostream>
#include<ctime>
using namespace std;



int main(){
	cout << "Array (0 to " << RAND_MAX << ")" << endl;
	const int size = 100000;
	srand(time(0));
	
	int intArr[size];
	for (int i = 0; i < size; i++){
		intArr[i]=rand();
	}
	int time = clock();
	if (!isSorted(intArr, size)){
		//sortExchange(intArr, size);
		//sortInsertion(intArr, size);
		sortSelection(intArr, size);
	}
	int time2 = clock();
	//for (int i = 0; i < size; i++){
	//	cout << intArr[i] << endl;
	//}
	
	cout << isSorted(intArr, size) << endl;
	cout << time2-time << endl;

	//Point point[size];
	//for (int i = 0; i < size; i++){
	//	point[i].set(rand(), rand());
	//}
	//if (!isSorted(point, size)){
	//	//sortExchange(point, size);
	//	//sortInsertion(point, size);
	//	sortSelection(point, size);
	//}	
	//for (int i = 0; i < size; i++){
	//	cout << point[i].length() <<endl;
	//}
	//cout << isSorted(point, size) << endl;


	system("pause");
}