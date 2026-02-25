// 1370. Increasing Decreasing String
// https://leetcode.com/problems/increasing-decreasing-string/description/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    static bool compare(int a, int b) {
        if (__builtin_popcount(a) == __builtin_popcount(b)) {
            return a < b;
        }
        
        return __builtin_popcount(a) < __builtin_popcount(b);
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
    
};