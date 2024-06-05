#week16 的輔助常識 collections.Counter
# import collections 修改前
from collections import Counter #修改後
words = ["bella", "label", "roller"]
for i in range(3):
  #counter = collections.Counter(words[i]) 修改前
  counter = Counter(words[i]) #修改後
  print(word[i], counter)
# ans = collections.Counter(words[0]%collections.Couner(words[1]&collections.Counter(words[2])))
ans = Counter(words[0]) & Counter(words[1]) & Counter(words[2]) #修改後
print(ans)