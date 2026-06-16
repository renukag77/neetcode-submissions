class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(auto num: nums){
            int counter = count(nums.begin(), nums.end(), num);
            if(counter>n/2){
                return num;
            }
        }
        return -1;
    }
};