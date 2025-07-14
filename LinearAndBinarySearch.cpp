//Linear And Binary Search 14-07-25
#include <iostream>

int linearSearch(int a[],int len,int key) {
	for (int i = 0; i < len; i++){
		if (a[i] == key) {
			return i;
		}
	}
	return -1;
	std::cout << "Not found";
}

int binarySearch(int a[], int len, int key) {
	int h = len, l = 0, mid = (h + l) / 2;

	while (l <= h) {
		if (a[mid] > key) {
			h = mid - 1;
		}
		else if (a[mid] < key) {
			l = mid + 1;
		}
		else if (a[mid] == key) {
			return mid;
		}
		mid = (h + l) / 2;
	}
	if (h == l && h == key) {
		return h;
	}
	else {
		std::cout << "Not found";
		return -1;
	}
}

int main() {
	std::cout << "1: Linear Search \n 2: Binary Search \n Select: ";
	int choice = 0;

	std::cin >> choice;
	int len, key, index, *arr;
	switch (choice) {
		case 1:
			
			std::cout << "1: Linear Search Enter length of array: ";
			std::cin >> len;
			arr = new int[len];

			for (int i = 0; i < len; i++){
				std::cout << "Enter " << i << ": ";
				std::cin >> arr[i];
			}
			
			std::cout << "Enter Key: ";
			std::cin >> key;
			index = linearSearch(arr, len, key);
			std::cout << "Found at index: " << index;
			break;

		case 2:
			std::cout << "1: Binary Search Enter length of array: ";
			std::cin >> len;
			arr = new int[len];

			for (int i = 0; i < len; i++) {
				std::cout << "Enter " << i << ": ";
				std::cin >> arr[i];
			}

			std::cout << "Enter Key: ";
			std::cin >> key;
			index = binarySearch(arr, len, key);
			std::cout << "Found at index: " << index;
			break;
		default:
			std::cout << "Invalid Choice";
	}

}