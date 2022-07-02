#include<iostream>
#include "Header.h";
#include <algorithm>
using namespace std;

void threeArray(int ar1[], int ar2[], int ar3[], int sz1, int sz2, int sz3)
{
	cout << "\n Common Arrays Are :";
	int i = 0, j = 0, k = 0;
	while (i < sz1 && j < sz2 && k < sz3)
	{
		if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
		{
			cout << ar1[i] << " ";
			i++;
			j++;
			k++;
		}
		else if (ar1[i] < ar2[j])
		{
			i++;
		}
		else if (ar2[j] < ar3[k])
		{
			j++;
		}
		else
		{
			k++;
		}
			

	}
}
