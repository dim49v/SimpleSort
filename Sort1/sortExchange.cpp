template<typename T>
void sortExchange(T* arr, int size){
	T key;
	bool change = true;
	for (int i = 0; i < size - 1 && change; i++){
		change = false;
		for (int j = 0; j < size - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				key = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = key;
				change = true;
			}
		}
	}
}