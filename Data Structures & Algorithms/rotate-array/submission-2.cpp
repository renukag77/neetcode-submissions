class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size())
            k = k%nums.size();
        vector<int>ans;
        int limit = nums.size()-k;
        for(int i =0; i<nums.size(); i++){
            if(i>=limit)
                ans.push_back(nums[i]);
        }

        for(int i =0; i<limit; i++){
            ans.push_back(nums[i]);
        }
        nums = ans;
    }
};