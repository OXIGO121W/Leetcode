class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set<int> s;
        vector<int> ans;
        int i;
        for(i = 0; i < nums.size(); i++)
        {
            if(s.contains(target - nums[i]))
            {
                break;
            }
            s.insert(nums[i]);
        }
        for(int j = 0; j < i; j++)
        {
            if(target - nums[i] == nums[j])
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        
        }
   return ans;
     }
};