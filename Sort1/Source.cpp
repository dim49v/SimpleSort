#include"Header.h"
#include<iostream>
#include<ctime>
using namespace std;



int main(){
	cout << "Array (0 to " << RAND_MAX << ")" << endl;
	const int size =10;
	srand(time(0));
	
	//int intArr[size];
	//for (int i = 0; i < size; i++){
	//	intArr[i]=rand();
	//}
	//if (!sortTest(intArr, size)){
	//	sortExchange(intArr, size);
	//	//sortInsertion(intArr, size);
	//	//sortSelection(intArr, size);
	//}
	//for (int i = 0; i < size; i++){
	//	cout << intArr[i] << endl;
	//}
	//cout << sortTest(intArr, size) << endl;
	//

	Point point[size];
	for (int i = 0; i < size; i++){
		point[i].set(rand(), rand());
	}
	if (!sortTest(point, size)){
		//sortExchange(point, size);
		//sortInsertion(point, size);
		sortSelection(point, size);
	}	
	for (int i = 0; i < size; i++){
		cout << point[i].length() <<endl;
	}
	cout << sortTest(point, size) << endl;


	system("pause");
}