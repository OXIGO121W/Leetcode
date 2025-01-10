class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int n = nums.size();
        int cur_sum = 0;
            for(auto x : nums)
            {
                if(cur_sum < 0)
                {
                    cur_sum = 0;
                }
                cur_sum += x;
                if(cur_sum > max_sum) max_sum = cur_sum;
            }
       

        return max_sum;
    }
};
