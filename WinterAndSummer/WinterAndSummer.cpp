// WinterAndSummer.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Solution.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> temperatures(2);

	temperatures = { -5, -5, -5, 3, -42, 8, 3, 25, 10, 15};

	cout << "Temperatures: ";
	for (int i = 0; i < temperatures.size(); ++i) {
		cout << temperatures[i] << " ";
	}
	cout << endl;

	 Solution::solution(temperatures);

	system("PAUSE");
	return 0;
}
