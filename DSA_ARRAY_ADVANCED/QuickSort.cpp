#include<iostream>
#include "Header.h";
#include <algorithm>
using namespace std;

int divide(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j <= high; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i+1);
}
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int div = divide(arr, low, high);
		quickSort(arr, low, div - 1);
		quickSort(arr, div + 1, high);
	}

}
void printArray(int arr[],int size)
{

	cout << "\n\nArray Elements are After QUICK SORT :";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " " << endl;
	}
}
