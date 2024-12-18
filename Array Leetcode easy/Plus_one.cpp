class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int plusone = 1;
        for(int i = 0; i < digits.size(); i++)
        {
            if(digits[i] != 9)
            {
                digits[i]++;
                plusone = 0;
                break;
            }
            else
            {
                digits[i] = 0;
            }
        }
        if(plusone)
        {
            digits.push_back(1);
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};