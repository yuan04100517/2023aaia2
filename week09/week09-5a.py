class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        table = "abcdefghijklmnopqrstuvwxyz"
        def helper(root, nowStr):
            if root==None: return nowStr
            nextStr = table[root.val] + nowStr
            left = helper(root.left, nextStr)
            right = helper(root.right, nextStr)
            return min(left,right)

        #print("table[0] is", table[0])
        #print("table[25] is", table[25])
        return helper(root, '')