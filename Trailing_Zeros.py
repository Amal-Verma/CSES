n = int(input())

out = 0

while(n > 0):
  n //= 5
  out += n

print(out)