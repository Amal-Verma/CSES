import math

for t in range(int(input())):
  a = int(input())

  arr = list(input())

  x = math.isqrt(a)

  if (x ** 2 != a):
    print("No")
  elif (arr.count('1') == (4 * (x) - 4)):
    print("Yes")
  else:
    print("No")

