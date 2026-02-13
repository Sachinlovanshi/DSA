//Leetcode 228. Summary Ranges
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0) return {};
        string start=to_string(nums[0]);
        vector<string> ans;
        string end=to_string(nums[0]);
        for(int i=0;i<nums.size();i++){
            while(i+1<nums.size() && nums[i+1]==nums[i]+1){
                i++;
            }
            end=to_string(nums[i]);
            if(start!=end){
                string j= start + "->" +end;
                ans.push_back(j);
                
            }
            else{
                ans.push_back(start);
            }
            if(i+1<nums.size()){
            start=to_string(nums[i+1]);
            }

        }
        return ans;


    }
};