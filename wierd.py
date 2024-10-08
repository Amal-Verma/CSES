def Algo(n):
  out = []
  print(n)
  if n <= 1:
    out.append(1)
    return out
  
  if n%2 == 0:
    out.append(n//2)
    out += Algo(n//2)
  else:
    out.append(3*n + 1)
    out += Algo(3*n + 1)
  return out


n = int(input())
print(n, *Algo(n))