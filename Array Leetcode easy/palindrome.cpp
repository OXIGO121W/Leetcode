class Solution {
public:
    bool isPalindrome(long long x) {
        if(x < 0) return false;
        long long buffer = x;
        long long ans = 0;
        while(buffer)
        {
            ans = ans*10 + buffer %10;
            buffer/=10;
        }
       return ans == x;
    }
};