#include <iostream>

template <class T>
int binarySearch(T arr[], int n, T val) {
	int left = 0;
	int right = n - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == val)
			return mid;
		else if (arr[mid] < val)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}

int main(int argc, char const *argv[]) {
	int exampleArr[] = {0, 2, 3, 7, 12, 15};
	int len = sizeof(exampleArr) / sizeof(exampleArr[0]);
	std::cout << binarySearch(exampleArr, len, 7) << std::endl;
	return 0;
}