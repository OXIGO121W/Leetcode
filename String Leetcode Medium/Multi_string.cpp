/*

https://leetcode.com/problems/multiply-strings/

*/

class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        vector<int> ans(num1.size() + num2.size(), 0);   
        for(int i = 0; i < num1.size(); i++)
        {
            for(int j = 0; j < num2.size(); j++)
            {
                int digit = int(num1[i] - '0')*int(num2[j] - '0');
                ans[i + j] += digit;
                ans[i + j + 1] += ans[i+j] / 10;
                ans[i + j] %= 10;
            }
        }
        while(ans.back() == 0)
        {
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());
        string b; 
        for(auto x : ans)
        {
            b += to_string(x);
        }
        return b;
    }
};