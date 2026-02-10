//Leetcode 3719

#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;
class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        
        int ans=0;
        int start=0;
        for(int j=0;j<nums.size();j++){
            unordered_set<int> odd,even;
        for(int i=j;i<nums.size();i++){
            if(nums[i]%2==0){
                even.insert(nums[i]);
            }
            if(nums[i]%2!=0){
                odd.insert(nums[i]);
            }
            if(odd.size()==even.size()){
                ans=max(ans,i-j+1);
            }
        }
        }
        return ans;
    }
};