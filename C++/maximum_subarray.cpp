class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int sup_max_sum = 0;
            
        for(int i = 0; i < nums.size(); i++){
            sup_max_sum = max(nums[i], sup_max_sum + nums[i]);
            max_sum = max(max_sum, sup_max_sum);
        }         
        return max_sum;
    }
};
