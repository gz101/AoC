#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <queue>
#include <tuple>
#include <chrono>

using namespace std;

inline vector<string> read_lines(const string& path) {
    ifstream f(path);
    vector<string> lines;
    string s;
    while (getline(f, s)) lines.push_back(s);
    return lines;
}

inline string read_all(const string& path) {
    ifstream f(path);
    stringstream ss;
    ss << f.rdbuf();
    return ss.str();
}

inline vector<int> split_ints(const string& s, char delim = ',') {
    vector<int> res;
    stringstream ss(s);
    string token;
    while (getline(ss, token, delim))
        res.push_back(stoi(token));
    return res;
}

inline vector<string> split(const string& s, char delim = ',') {
    vector<string> res;
    string token;
    stringstream ss(s);
    while (getline(ss, token, delim))
        res.push_back(token);
    return res;
}

// USE CASE
// auto lines = read_lines("input.txt");
// auto nums = split_ints(lines[0], ',');
