class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        if not nums:
            return 0

        lPointer = 1
        count = 1

        for rPointer in range(1, len(nums)):
            if nums[rPointer] == nums[rPointer-1]:
                count += 1
            else:
                count = 1

            if count <= 2:
                nums[lPointer] = nums[rPointer]
                lPointer+=1

        return lPointer
        