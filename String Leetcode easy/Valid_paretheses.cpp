/*

https://leetcode.com/problems/valid-parentheses/description/



*/


class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        for(auto &c : s)
        {
            if(c == '(' || c == '{' || c == '[')
            {
                open.push(c);
            }
            else if(open.empty()) return false;
            else
            {
                char top = open.top();
                if((c == ')' && top == '(') || (c == '}' && top == '{') || (c ==']' && top == '['))
                {
                    open.pop();
                }
                else return false;
            }
        }
        if(!open.empty()) return false;
        return true;

    }
};