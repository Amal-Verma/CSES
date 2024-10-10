from itertools import accumulate
n = int(input())

a1 = [0] * n
a2 = [0] * n

for i in range(n):
  a1[i], a2[i] = map(int, input().split())

a1.sort()

print(sum(a2) - sum(accumulate(a1)))

