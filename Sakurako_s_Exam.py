for t in range(int(input())):
  a, b = map(int, input().split())

  if (b%2 == 0) and (a % 2 == 0):
    print("YES")
  elif (b%2==1) and (a%2==0) and (a!=0):
    print("YES")
  else:
    print("NO")