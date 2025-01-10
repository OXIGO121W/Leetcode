/*

https://leetcode.com/problems/word-subsets/description/


*/

map<char, int> charfreq(vector<string>& w)
{
    map<char,int> result;
    for(auto x : w)
    {
        map<char,int> temp;
        for(auto c : x)
        {
            temp[c]++;
        }
        for(auto [c, freq] : temp)
        {
            result[c] = max(result[c], freq);
        }
        temp.clear();  
    }
    return result;
}

class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        map<char, int> char_freqB = charfreq(words2);
        vector<string> ans;
        for(auto x : words1)
        {
            bool valid = true;
            unordered_map<char, int> wordfreq;
            for(auto c : x)
            {
                wordfreq[c]++;
            }
            for(auto a : char_freqB)
            {
                if(wordfreq[a.first] < a.second)
                {
                    valid = false;
                    break;
                }
            }  
            if(valid) ans.push_back(x);
            wordfreq.clear(); 
        }  
        return ans; 
    }
};