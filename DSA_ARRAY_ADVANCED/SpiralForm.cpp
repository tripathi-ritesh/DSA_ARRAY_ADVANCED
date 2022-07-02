#include<iostream>
#include "Header.h";
#include <algorithm>
#include <vector>
using namespace std;
#define R 4
#define C 4
void printSpiralOrder(vector<vector<int>> const &mat)

	
	{
		// base case
		if (mat.size() == 0) {
			return;
		}

		int top = 0, bottom = mat.size() - 1;
		int left = 0, right = mat[0].size() - 1;

		while (1)
		{
			if (left > right) {
				break;
			}
			// print top row
			for (int i = left; i <= right; i++) {
				cout << mat[top][i] << " ";
			}
			top++;

			if (top > bottom) {
				break;
			}
			// print right column
			for (int i = top; i <= bottom; i++) {
				cout << mat[i][right] << " ";
			}
			right--;

			if (left > right) {
				break;
			}
			// print bottom row
			for (int i = right; i >= left; i--) {
				cout << mat[bottom][i] << " ";
			}
			bottom--;

			if (top > bottom) {
				break;
			}
			// print left column
			for (int i = bottom; i >= top; i--) {
				cout << mat[i][left] << " ";
			}
			left++;
		}
	}