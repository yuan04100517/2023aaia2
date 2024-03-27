class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        a = [0]*101
        best = 0
        for now in nums:
            a[now]+=1
            if a[now]>best: best = a[now]

        ans = 0
        for i in range(1,101):
            if a[i]==best: ans += a[i]
        return ans