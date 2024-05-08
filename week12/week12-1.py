n = int(input('請輸入1個數:'))
def isPrime(n):
  for i in range(2,n):
    if n%i==0:
      return False
  return True

if isPrime(n): print('n是質數')
else: print('n不是質數')
