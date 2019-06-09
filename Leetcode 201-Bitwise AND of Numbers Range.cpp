//beat 97%

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int bit=0;
        
        while (m!=n)
        {
            m >>= 1;//101->10->1 
            n >>= 1;//111->11->1
            //cout << m << " " << n << endl;
            bit++;
        }
        
        return m<<bit;
    }
};