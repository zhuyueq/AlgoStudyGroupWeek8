//faster than 91%

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m = nums[0];
        int c = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (m == nums[i]) {
                c++;
            } else if (c > 1) {
                c--;
            } else {
                m = nums[i];
            }
        }
        return m;
    }
};

//Moore Voting Algo