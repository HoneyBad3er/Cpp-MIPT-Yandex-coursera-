#include "pch.h"
#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;

int main()
{
	unsigned N;
	cin >> N;

	vector<int64_t> temp(N);
	int64_t sum = 0;
	for (unsigned i = 0; i < N; ++i) {
		cin >> temp[i];
		sum += temp[i];
	}

	int avg_temp = sum / temp.size();
	vector<unsigned> num_of_days;
	unsigned i = 0;
	for (int64_t current_temp : temp) {
		if (current_temp > avg_temp) {
			num_of_days.push_back(i);
		}
		++i;
	}

	cout << num_of_days.size() << endl;

	for (unsigned day : num_of_days) {
		cout << day << ' ';
	}

}
