class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        ans = []
        visited = set()
        
        for n in nums:
            if n in visited:
                ans.append(n)
                continue
            visited.add(n)
        return ans;
        