#include <map>
#include <vector>
#include <iostream>
using namespace std;

template<class T>
map<T, T> count_map(vector<T> &V) {
    map<T, T> counter;
    for(auto &v : V) {
        counter[v]++;
    }

    return counter;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    map<int, int> mapping = count_map(nums);

    for(const auto& pair : mapping) {
        cout << pair.first << ' ' << pair.second << endl;
    }

    return 0;
}