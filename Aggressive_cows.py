# import math
# from collections import defaultdict
# from collections import Counter
# from collections import deque

# from functools import lru_cache

# from itertools import accumulate

# yes = lambda : print('Yes')
# no = lambda : print('No')

def isMinPos(c, arr, m):
  cnt = 0
  pre = -1
  for x in arr:
    if (x - pre) >=m or pre == -1:
      cnt += 1
      pre = x
  
  if cnt >= c: return True
  return False


for t in range(int(input())):
  # n = int(input())
  n, c = map(int, input().split())
  # s = input()
  arr = []

  for i in range(n): arr.append(int(input()))
  arr.sort()

  l = 0
  h = int(1e9)

  mid = (h - l) // 2 + l

  while(h-l > 1):
    mid = (h - l) // 2 + l
    if isMinPos(c, arr, mid): l = mid
    else: h = mid - 1
  
  if isMinPos(c, arr, h): print(h)
  else: print(l)
    


  