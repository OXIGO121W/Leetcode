/*
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/


*/




class Solution {
public:
    int strStr(string haystack, string needle) {
       if(haystack.size() < needle.size()) return -1;
       int l = haystack.size(); int k = needle.size();
       for(int i = 0; i <= l - k; ++i)
       {
        string s = haystack.substr(i, k);
        if(s == needle) return i;
       }
       if(haystack == needle) return 0;
       return -1;
    }    
};