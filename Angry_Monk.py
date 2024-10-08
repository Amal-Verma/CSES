for t in range(int(input())):
  n, k = map(int, input().split())
  arr = [int(x) for x in input().split()]
  arr.remove(max(arr))

  # print(arr)

  count = 0
  one = 0

  for x in arr:
    if x == 1:
      one += 1
    else:
      count += x - 1
      one += x

  print(count + one) 