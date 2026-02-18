//Leetcode POTD
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool flag=true;
        int prev=n & 1;
        while(n){
            n=n>>1;
            int np=n&1;
            if(prev^np !=1) flag=false;
            prev=np;
            
        }
        return flag;
    }
};