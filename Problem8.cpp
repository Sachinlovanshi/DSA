#include <bitset>
#include <string>

using namespace std;

class Solution {
public:
    bool hasAllCodes(string s, int k) {
         int req = 1 << k;
        bitset<1048576> seen;
        int mask = req - 1;
        int hash = 0;

        for (int i = 0; i < s.length(); ++i) {
            hash = ((hash << 1) & mask) | (s[i] & 1);

            if (i >= k - 1 && !seen[hash]) {
                req--;
                if (req == 0) return true;
            }
        }

        return false;
        
        
        
    }
};