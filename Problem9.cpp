// 2685. Count the Number of Complete Components
// https://leetcode.com/problems/count-the-number-of-complete-components/description/

#include <vector> 
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> maxi;
        long long maximum=0;
        for(int i=0;i<nums.size();i++){
            maximum= max(maximum,  (long long)nums[i]);
            maxi.push_back(maximum);
        }
        long long prev=0;
        vector<long long> ans;
        for(int i=0;i<nums.size();i++){
            long long num=prev+nums[i]+maxi[i];
            ans.push_back(num);
            prev=ans[i];

        }
        return ans;
    }
};