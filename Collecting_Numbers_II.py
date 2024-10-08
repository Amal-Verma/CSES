# import math
# from collections import defaultdict
# from collections import Counter
# from collections import deque

# from functools import lru_cache

# from itertools import accumulate

n, q = map(int, input().split())
arr = list(map(int, input().split()))

newarr = [i for x,i in sorted([(x, i + 1) for i,x in enumerate(arr)], key=lambda x:x[0])]
# print(newarr)

se = set()

def cnt(newarr):
  out = 1
  pre = 0
  for x in newarr:
    if pre > x:
      out += 1
    pre = x
  return out

for qu in range(q):
  i, j = map(int, input().split())
  r, c = arr[i-1], arr[j-1]
  arr[i-1], arr[j-1] = arr[j-1], arr[i-1]
  newarr[r-1], newarr[c-1] = newarr[c-1], newarr[r-1]
  print(newarr)
  print(cnt(newarr))
  