#pragma once
#ifndef INSERTION_SORT
#define INSERTION_SORT

#include <iostream>
#include "config.h"

namespace Solution {
	
	template <typename T>
	void InsertionSort(T input[], int n) {
		for (int i = 1; i < n; i++) {
			T curr = input[i];
			int j = i;
			while (j > 0 && input[j - 1] > curr) {
				input[j] = input[j - 1];
				j--;
			}
			input[j] = curr;
		}
	}
}

#endif // !INSERTION_SORT
