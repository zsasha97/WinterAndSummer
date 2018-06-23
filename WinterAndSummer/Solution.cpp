#include "stdafx.h"
#include "Solution.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

Solution::Solution()
{
}


Solution::~Solution()
{
}

int Solution::solution(std::vector<int>& vector)
{

	int min = vector[0];
	int minpos = 0;
	for (int i = 1; i < vector.size(); ++i) {
		if (vector[i] < min) {
			min = vector[i];
			minpos = i;
		}
	}

	int max = vector[0];
	for (int i = 1; i < minpos; ++i) {
		if (vector[i] > max) {
			max = vector[i];
		}
	}

	int result = vector.size();
	for (int i = vector.size() - 1; vector[i] > max; --i) {
		--result;
	}
	cout << "Winter lasts " << result << " days" << endl;
	system("PAUSE");
	return 0;
}