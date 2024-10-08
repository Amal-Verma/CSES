M = int(1e9 + 7)

def binaryexp(a, b):
  res = 1
  while(b > 0):
    if b & 1: res *= a
    a *= a
    b >>= 1

    res %= M
    a %= M
  
  return res

print(binaryexp(2, int(input())))