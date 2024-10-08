from itertools import accumulate
n, q = map(int, input().split())
arr = [0] + list(accumulate(map(int, input().split()), lambda x, y: x^y))
for i in range(q):
  x, y = map(int, input().split())
  print(arr[x-1] ^ arr[y])