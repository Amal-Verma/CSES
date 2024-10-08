import math

for t in range(int(input())):
  n = int(input())
  arr = [int(x) for x in input().split()]

  s = input()

  visited = [False] * n
  out = [0] * n

  for i in range(n):
    if visited[i] == True:
      continue

    p = arr[i]
    black = 0
    temp = [i]

    if s[i] == '0':
      black += 1

    while p != i:
      if s[p] == '0':
        black += 1
      temp.append(p)
      p = arr[p - 1]
      visited[p-1] = True

    for x in temp:
      out[temp] = black
  
  print(*out)
