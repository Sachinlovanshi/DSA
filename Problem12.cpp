// 1404. Number of Steps to Reduce a Number in Binary Representation to One
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/description/

#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    int numSteps(string s) {
          int ans=0;
      int i=s.size()-1;
      int ext=0;
    while(i>0){
        if(s[i]=='1'){
            if(ext==0){
                ans=ans+2;
                ext=1;
            }
            else{
                ans++;

            }
        }else{
            if(ext==1){
                ans=ans+2;
            }
            else{
                ans=ans+1;
            }

        }
        i--;
    }
    if(ext==1){
        ans++;
    }
    return ans;
    
    }
};