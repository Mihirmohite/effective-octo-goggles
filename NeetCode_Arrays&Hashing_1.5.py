from collections import Counter

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # Step 1: Count the frequency of each element in nums
        freqmap = Counter(nums)  # Counter automatically creates a frequency map
        
        # Step 2: Use heapq to find the k most frequent elements
        return [item for item, _ in freqmap.most_common(k)]
