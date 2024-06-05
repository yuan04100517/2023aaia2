class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        #其實題目不足3個
        #counter = Counter(words[0]) & Counter(words[1]) & Counter(words[2])
        counter = Counter(words[0])
        for i in range(1,len(words)):
            counter &= Counter(words[i]) 
        ans = []
        for c in counter:
            for i in range(counter[c]):#就重覆幾次
                ans.append(c) #就重覆幾次
        return ans 
        