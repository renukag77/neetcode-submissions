class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size())
            k = k%nums.size();
        int limit = nums.size()-k;
        int start = 0;
        int end = nums.size();
        reverse(nums.begin()+limit, nums.end());
        reverse(nums.begin(), nums.begin()+limit);
        reverse(nums.begin(), nums.end());
    }
};