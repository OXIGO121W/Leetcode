class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        int longest = 0;
        for(auto [x,y] : freq)
        {
            if(freq.find(x+1) != freq.end())
            {
                longest = max(longest, freq[x+1] + y);
            }
        }
        return longest;
    }
};