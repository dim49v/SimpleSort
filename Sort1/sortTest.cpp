template<typename T>
bool sortTest(T* arr, int size){
	bool a = true;
	for (int i = 0; i < size - 1; i++){
		if (arr[i]>arr[i + 1])
			a = false;
	}
	return a;
}