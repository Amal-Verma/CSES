n = int(input())

for i in range(1, min(4, n) + 1):
  if i == 1: print(0)
  elif i == 2: print(6)
  elif i == 3: print(28)

for i in range(4, n + 1):
  k = i**2 - 1
  out = (4 * (k - 2) +
        8 * (k -3) +
        4 * (i - 3) * (k - 4)+
        4 * (i - 4) * (k - 6)+
        ((i - 4) ** 2) * (k - 8))
  print(out // 2)