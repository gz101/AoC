#pragma once

#include <utility>
#include <vector>

using namespace std;

using Point = pair<int,int>;
const vector<Point> DIR4 = {{1,0},{-1,0},{0,1},{0,-1}};
const vector<Point> DIR8 = {
    {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}
};

inline bool in_bounds(int r, int c, int R, int C) {
    return r >= 0 && r < R && c >= 0 && c < C;
}

// USE CASE
// for (auto [dr, dc] : DIR4) {
//     int nr = r + dr, nc = c + dc;
//     if (in_bounds(nr, nc, R, C)) { ... }
// }