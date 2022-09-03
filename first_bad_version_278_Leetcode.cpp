// Leetcode 278. First bad version 


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#include <typeinfo>
#include <type_traits>

class Solution {
public:
    int firstBadVersion(int n) {
        
       int bad = -1;
        
        // if (n == 1) return 1;
        
        for(int b = n/2 +1; b >= 1; b /= 2){
            while(!isBadVersion(bad + b)){
                bad += b;
            }
        }
        int k = bad+1;
        return k;
        
    }
};
// not working for unknown and highly sought after reason : ( storing bad + d is causing overflow )
class Solution {
public:
    int firstBadVersion(int n) {
        
       int bad = -1;
        
        // if (n == 1) return 1;
        
        for(int b = n/2 +1; b >= 1; b /= 2){
            while(!isBadVersion(bad + b)){
                bad += b;
            }
        }
        int k = bad+1;
        return k;
        
    }
};