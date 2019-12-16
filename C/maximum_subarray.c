int max(int a, int b){
    if(a > b) return a;
    else return b;
}

int maxSubArray(int* nums, int numsSize){
    int max_sum = nums[0];
    int sup_max_sum = 0;
            
    for(int i = 0; i < numsSize; i++){            
        sup_max_sum = max(nums[i], sup_max_sum + nums[i]);
        max_sum = max(max_sum, sup_max_sum);
    }         
    return max_sum;
}
