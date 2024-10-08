from collections import defaultdict

n = int(input())
arr = list(map(int, input().split()))

dict = defaultdict(int)
out = 0
idx = 0
maxi = 0

for x in arr:
  while dict[x] != 0:
    out -= 1
    dict[arr[idx]] -= 1
    idx += 1
  out += 1
  dict[x] += 1
  maxi = max(maxi, out)

print(maxi)