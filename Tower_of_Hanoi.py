def hanoi(depth,start, end):
  if depth == 0: return
  s = {start, end}
  mid = 0
  for i in range(1, 4):
    if i not in s:
      mid = i
      break

  hanoi(depth -1, start, mid)
  print(start, end)
  hanoi(depth -1, mid, end)

n = int(input())
print(2 ** n - 1)
hanoi(n, 1, 3)