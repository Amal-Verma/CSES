# import math
# from collections import defaultdict
# from collections import Counter
# from collections import deque

# from functools import lru_cache

from itertools import accumulate

# yes = lambda : print('Yes')
# no = lambda : print('No')

# for t in range(int(input())):
# n = int(input())
n, m = map(int, input().split())
# s = input()
arr = list(map(int, input().split()))
pre = list(accumulate([0] + arr))

# print(pre)

for i in range(m):
  a, b = map(int, input().split())
  print(pre[b] - pre[a-1])
  