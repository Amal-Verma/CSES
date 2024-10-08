n = int(input())

for t in range(n):
  a, b = map(int, input().split())

  diff = abs(a - b)
  diff = min(diff, a, b)

  if a > b: a, b = b, a
  a -= diff
  b -= 2* diff

  x = min(a, b)
  x -= x % 3

  a -= x
  b -= x

  if a > b: a, b = b, a

  # print(a, b)

  if a == 0 and b == 0: print("YES")
  elif a == 1 and b == 2: print("YES")
  elif a == 2 and b == 4: print("YES")
  else: print("NO")