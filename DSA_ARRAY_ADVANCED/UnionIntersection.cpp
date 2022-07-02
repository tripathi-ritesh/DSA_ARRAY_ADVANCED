#include "Header.h";
#include <iostream>

using namespace std;

// Find	the	Union	and	Intersection	of	the	two	sorted	arrays.
void printUnion(int arr1[], int arr2[], int size1, int size2)
{
	cout << " UNION of two sorted array is : \n";
	int i = 0, j = 0;
	while (i < size1 && j < size2)
	{
		if (arr1[i] < arr2[j])
		{
			cout << arr1[i++] << " ";
		}
		else if (arr2[j] < arr1[i])
		{
			cout << arr2[j++] << " ";
		}
		else
		{
			cout << arr2[j++] << " ";
			i++;
		}


	}
	while (i < size1)
		cout << arr1[i++] << " ";
	while (j < size2)
		cout << arr2[j++] << " ";
}
void printIntersection(int arr1[],int arr2[],int size1,int size2)
	{
		cout << "\n The Intersection of two sorted array :\n";
		int i = 0, j = 0;
		while (i < size1 && j < size2)
		{
			if (arr1[i] < arr2[j])
			{
				 i++;
			}
			else if (arr2[j] < arr1[i])
			{
				j++;
			}
			else 
			{
				cout << arr2[j] << " ";
				i++;
				j++;
			}
		}
	}