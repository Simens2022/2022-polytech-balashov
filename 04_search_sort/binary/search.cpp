int search(int arr[], int l, int r, int key){
	int mid = 0;
	bool flag = false;
	while ((l <= r) && (flag != true)){
		mid = (l + r) / 2;
		if (arr[mid] == key) flag = true; 
		if (arr[mid] > key) r = mid - 1; 
		else l = mid + 1;
	}
	return mid;
}
