# week11-2.py N! 函式呼叫函式,算N!
# 給 Python Tutor 執行
def func(n):
  if n == 1: return 1
  return n * func(n-1)
n = 4 # = int(input('請輸入1個數字:'))
ans = func(n)
print('答案是:', ans )