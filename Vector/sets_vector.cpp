#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

<template T>
vector<T> sets_v(vector<T> &nums) {
	vector<T> newNums = nums;
	newNums.erase(unique(newNums.begin(), newNums.end()), newNums.end());
	return newNums;
}

int main() {
	vector<int> nums = {1, 2, 3, 1, 2, 3};
	vector<int> setNums = sets_v(nums);

	for(int i : setNums) {
		cout << i << " ";
	}

	return 0;
}
