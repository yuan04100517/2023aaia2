def func(n):
  if n == 1: return 1
  return n * func(n-1)
n = int(input('請輸入1個數字:'))
ans = func(n)
print('答案是:', ans )