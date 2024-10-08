from collections import Counter
import numpy as np
import math

n = int(input())
c = Counter(map(int, input().split()))

q = int(input())

N = max(c.keys()) + 10
sieve = np.zeros((N), dtype=np.int32)

for i in range(1, N):
  sieve[i] = sum(c[j] for j in range(i, N, i))

for i in range(q):
  a, b = map(int, input().split())
  ans = 0
  if a < N:
    ans += sieve[a]
  if b < N:
    ans += sieve[b]
  lcm = math.lcm(a, b)
  if lcm < N:
    ans -= sieve[lcm]
  print(ans)