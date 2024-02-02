#pragma once
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

class GreaterThanPrevious
{
private:
	int arraySize;
	int arrayElement;
	vector<int> arrayOfNums;
public:
	GreaterThanPrevious() = default;
	void SetArray() {
		cout << "Enter the size of the array: ";
		cin >> arraySize;

		for (int i = 0; i < arraySize; i++) {
			cout << "Enter the element of the array (number " << i + 1 << "): ";
			cin >> arrayElement;
			arrayOfNums.insert(arrayOfNums.begin(), arrayElement);
		}
	}
	void FindGreaterThanPrev() {
		int counter = 0;
		cout << "Elements that are greater than the previous element: ";
		for (int i = 1; i < arraySize; i++) {
			if (arrayOfNums[i] > arrayOfNums[i - 1]) {
				cout << arrayOfNums[i] << std::endl;
			};
		}
	}
};

