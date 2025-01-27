class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        zcount = 0
        for x in nums:
            if x == 0:
                zcount += 1
        
        if zcount > 1:
            return [0] * len(nums)

        if zcount == 1:
            prod = 1
            for x in nums:
                if x == 0:
                    continue
                else: prod *= x
            
            for i in range(len(nums)):
                if nums[i] == 0:
                    nums[i] = prod
                else:
                    nums[i] = 0
            
        else:
            prod = 1
            for x in nums:
                prod *= x

            for i in range(len(nums)):
                nums[i] = prod//nums[i]

        return nums
