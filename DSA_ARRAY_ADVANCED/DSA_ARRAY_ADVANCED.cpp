#include <iostream>
#include "Header.h";
using namespace std;

int main()
{
	int arr[] = { 2, 10,10, 100, 2, 10, 11,2,11 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int arr1[] = { 1, 2, 4, 5, 6 };
	int arr2[] = { 2, 3, 5, 7 };

	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);

	
	printUnion(arr1, arr2, size1, size2);
	printIntersection(arr1, arr2, size1, size2);
	//cyclicRotate(arr, size);
	//missingNumber(arr, size);
	//int sum = 6;
	
	//cout << "\n\nTotal Pairs of sum Is : " << pairsCount(arr, size, sum);
	cout << "\n-----------------------------------\n";
	 findDuplicates(arr, size);
	return 0;
}