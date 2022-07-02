#include "Header.h";
#include <iostream>

using namespace std;
void cyclicRotate(int arr[], int size)
{
	cout << "\n\nCyclic Rotate\n";
	/*int temp = arr[size-1];
	for (int i = size - 1; i >  0; i--)
		arr[i] = arr[i - 1];
		arr[0] = temp;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i]<<" , ";
	}*/
	int i = 0, j = size - 1; // i and j pointing to first and last element respectively
	while (i != j) 
	{
		swap(arr[i], arr[j]);
		i++;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " , ";
	}

}
// To Find the Missing Integer 
void missingNumber(int arr[], int size)
{
	int sumtotal = (size + 1)*(size + 2) / 2;
	
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	
	 
	cout << "\nMissing Number is :" << sumtotal - sum;
}
//. Find all pairs on integer array whose sum is equal	to	given	number.

int pairsCount(int arr[], int size, int sum)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] + arr[j] == sum)
			{
				count++;
			}
		}
	}
	return count;
}
//  Find	duplicates	in	an	array.

void findDuplicates(int arr[], int size)
{
	int count = 0;
	
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{	
				count++;
				//cout<< arr[i] << " ";
			}
		}
	}
	cout << count;
}