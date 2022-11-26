int search(int arr[], int n, int x, int result[]){
	int b = 0;
    for (int i = 0; i <= n; i++){
        if (arr[i] == x){
            result[b] = i;
            b++;
        }
    }
    return b;
}