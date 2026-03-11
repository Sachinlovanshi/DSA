#include <cmath>
// LeetCode 1009: Complement of Base 10 Integer
// link: https://leetcode.com/problems/complement-of-base-10-integer/

class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0;
        int j=0;
        if(n==0) return 1;
        while(n){
            int h=n&1;
            int k= !h;
            if(k==1){
            ans+=pow(2,j);
            }
            j++;
            n= n>>1;
        }
        return ans;
    }
};