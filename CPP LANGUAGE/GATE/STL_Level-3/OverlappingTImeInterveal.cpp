/*
Problem Statment:- You are giben an array of time intervals where every element is a vector of 2 elems ai: {start1,end}.
                    You have to merge all the overlapping intervals into one and output the final set of intervals that should have only the 
                    non -overlapping intervals in it.
                            Input: {{2,4},{1,5},{4,6},{7,8}}
                            Output:
                                {{1,6},{7,8}}
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, int>> intervals = {{2, 4}, {1, 5}, {4, 6}, {7, 8}};

    // Step 1: Sort the intervals based on the starting time
    sort(intervals.begin(), intervals.end());
    for (auto &interval : intervals ) {
        cout << "{" << interval.first << ", " << interval.second << "}\n";
    }


    // Step 2: Create a result vector to store merged intervals
    vector<pair<int, int>> merged;

    for (auto &interval : intervals) {
        // If the merged list is empty or the current interval does not overlap
        if (merged.empty() || merged.back().second < interval.first) {
            merged.push_back(interval);
        } else {
            // Overlapping intervals - merge them
            merged.back().second = max(merged.back().second, interval.second);
        }
    }

    // Step 3: Print the merged intervals
    for (auto &interval : merged) {
        cout << "{" << interval.first << ", " << interval.second << "}\n";
    }

    return 0;
}