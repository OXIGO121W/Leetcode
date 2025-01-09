/*
https://leetcode.com/problems/counting-words-with-a-given-prefix/?envType=daily-question&envId=2025-01-09


*/
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(auto x : words)
        {
            if(x.substr(0, pref.size()) == pref)
            {
                ++count;
            }
        }
        return count;
    }
};