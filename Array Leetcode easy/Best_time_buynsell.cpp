
/*

https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


*/



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int Min = 1e8;
        for(auto x : prices)
        {
            res = max(res, x - Min);
            Min = min(x, Min); 
        }
        return res;
    }
};