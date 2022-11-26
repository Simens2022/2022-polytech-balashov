#include <iostream>
#include <ctime>

int linesearch(int arr[], int n, int key){
	for (int x = 0; x < n; x++){
		if (key == arr[x]) return x;
	}
	return -1;
}

int doublesearch(int arr[], int l, int n, int key){
	if (n - 1 >= l) {
        int mid = l + (n - 1 - l) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] > key) return doublesearch(arr, l, mid - 1, key);
        return doublesearch(arr, mid + 1, n - 1, key);
	}
	return -1;
}

int main(){
	int mas[100] = {- 996, -960, -944, -887, -865, -860, -846, -831, -790, -785, -700, -691, -662, -662, -647,
		-640, -587, -532, -524, -519, -501, -497, -475, -471, -461, -457, -452, -442, -441, -416,
		-412, -411, -390, -389, -358, -341, -306, -257, -253, -252, -248, -208, -143, -134, -82,
		-79, -11, 21, 26, 48, 68, 69, 72, 93, 95, 99, 115, 120, 156, 164, 181, 200, 231, 252, 288,
		304, 336, 343, 364, 402, 419, 486, 546, 584, 595, 596, 606, 627, 636, 666, 666, 683, 701,
		740, 766, 780, 782, 794, 802, 829, 832, 837, 858, 875, 881, 882, 883, 883, 947, 959};
	int n = sizeof(mas) / sizeof(mas[0]);
    //std::cout << linesearch(mas, n, 120) << std::endl;
	std::cout << doublesearch(mas, 0, n, 120) << std::endl;
	std::cout << clock() / 1000.0;
    return 0;
}