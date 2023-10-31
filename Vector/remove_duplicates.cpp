#include <iostream>
#include <algorithm>
#include <vector>
#define all(x) x.begin(), x.end()
using namespace std;


int main() {
    vector<int> nums = {1, 2, 3, 7, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 0, 9, 7, 8, 6};

    sort(all(nums));
    nums.erase(unique(all(nums)), nums.end());

    for(auto &r : nums)
        cout << r << " ";
}