class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        N = len(colors)
        ans = 0
        for i in range(N):
            for j in range(N):
                if colors[i] != colors[j]  and j-i > ans:
                    ans = j-i
        return ans