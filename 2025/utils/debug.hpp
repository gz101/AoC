#pragma once

#include <iostream>
#include <vector>

using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        os << v[i];
        if (i + 1 < v.size()) os << ", ";
    }
    return os << "]";
}

#define DBG(x) cerr << #x << " = " << (x) << endl;

// USE CASE
// vector<int> nums = {1,2,3};
// DBG(nums); // nums = [1, 2, 3]
