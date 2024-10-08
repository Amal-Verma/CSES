n = int(input())

if n == 1: print(1)
elif n <= 3: print('NO SOLUTION')
else:
  arr = [x for x in range(n - 1, 0, -2)] + [x for x in range(n, 0, -2)]
  print(*arr)