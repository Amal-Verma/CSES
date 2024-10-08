from collections import Counter

s = list(input())

c = Counter(s)

odd = 0

for key in c.keys(): 
  if c[key] % 2: odd += 1

if odd > 1: print('NO SOLUTION')
else:
  mid = []
  half = []
  for key in c.keys(): 
    if c[key] % 2:mid.append(key)
    half.extend([key] * (c[key]//2))

  print(''.join(half + mid + half[::-1]))