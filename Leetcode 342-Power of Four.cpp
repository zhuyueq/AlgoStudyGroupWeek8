//beats 100%

class Solution {
public:
    bool isPowerOfFour(unsigned int num) {
        return num>0 && ((num-1)&num)==0 && (num-1)%3==0;
    }
};