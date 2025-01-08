/*
https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/description/


*/

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> word;
        for(auto c : s)
        {
            word[c]++;
        }
        int buffer = word[s[0]];
        for(auto x : s)
        {
            if(buffer == word[x])
            {
                buffer = word[x];
            }
            else return false;
        }
        return true;
        
    }
};