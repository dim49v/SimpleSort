template<typename T>
void sortSelection(T* arr, int size){
	T min;
	T key;
	for (int i = 0; i < size - 1; i++){
		min = i;
		for (int j = i + 1; j < size; j++){
			if (arr[j] < arr[min])
				min = j;
		}
		key = arr[i];
		arr[i] = arr[min];
		arr[min] = key;
	}
}