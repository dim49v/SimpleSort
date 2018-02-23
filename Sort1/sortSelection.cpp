template<typename T>
void sortSelection(T* arr, int size){
	int indexMin;
	T key;
	for (int i = 0; i < size - 1; i++){
		indexMin = i;
		for (int j = i + 1; j < size; j++){
			if (arr[j] < arr[indexMin])
				indexMin = j;
		}
		key = arr[i];
		arr[i] = arr[indexMin];
		arr[indexMin] = key;
	}
}