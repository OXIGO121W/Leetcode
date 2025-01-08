/*
https://leetcode.com/problems/length-of-last-word/


*/


class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> a;
        stringstream ss(s);
        string x;
        while(ss >> x)
        {
            a.push_back(x);
        }
        return a[a.size()-1].size();
    }
};