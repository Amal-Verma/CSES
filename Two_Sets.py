n = int(input())

s = sum(range(n + 1))

if s % 2 == 1:
  print("NO")
else:
  print("YES")
  a = []
  b = []
  

  if n %2 == 1: 
    a.append(n)
    b.append(1)
    b.append(n-1)

  ifa = True

  for i in range(1 + n%2, n//2 + 1):
    k = n + (not n %2)
    if ifa:
      a.append(i)
      if i != k-i: a.append(k - i)
    else:
      b.append(i)
      if i != k-i: b.append(k - i)

    ifa = not ifa
  
  print(len(a))
  print(*a)

  print(len(b))
  print(*b)

