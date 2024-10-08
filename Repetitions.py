s = input()

pre = 'm'
count = 0
maxi = 0
for x in list(s):
  if pre == x: count += 1
  else:
    count = 1
    pre = x
  maxi = max(maxi, count)
print(maxi)