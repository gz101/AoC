#pragma once

#include <chrono>
#include <iostream>

using namespace std;
using namespace chrono;

struct Timer {
    steady_clock::time_point start;
    string label;
    Timer(string lbl = "") : start(steady_clock::now()), label(lbl) {}
    ~Timer() {
        auto end = steady_clock::now();
        cerr << label << " took "
             << duration_cast<milliseconds>(end - start).count()
             << " ms" << endl;
    }
};

// USE CASE
// {
//     Timer t("Part 1");
//     cout << solve_part1(lines) << endl;
// }
