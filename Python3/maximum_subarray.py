class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max_sum = max(nums)
        sup_max_sum = 0
            
        for n in nums:
            sup_max_sum = max(n, sup_max_sum + n)
            max_sum = max(max_sum, sup_max_sum)
                
        return max_sum
