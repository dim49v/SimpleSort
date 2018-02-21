template<typename T>
void sortInsertion(T* arr, int size){
	T key;
	for (int i = 1; i < size ; i++){
		key = arr[i];
		int u = i;
		while (key < arr[u-1] && u > 0){
			arr[u] = arr[u-1];
			u--;
		}
		arr[u] = key;
	}
}