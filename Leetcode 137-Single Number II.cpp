//faster than 90%

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            int cnt = 0, bit = 1 << i;
            for (int v:nums)
            {
                if (v & bit) cnt++;
            }
            if (cnt % 3 != 0) ans |= bit;
        }
        
        return ans;
    }
};