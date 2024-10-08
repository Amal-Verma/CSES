n,m,k = map(int, input().split())
d = sorted(list(map(int, input().split())))
a = sorted(list(map(int, input().split())))

indexa = 0
indexd = 0
cnt = 0



s = set([1,2,3,4])
print(s[0])
# print(d)
# print(a)

while((indexa < m) and (indexd < n)):
  mini = d[indexd] - k
  maxi = d[indexd] + k
  # print(mini, maxi, d[indexd], a[indexa], cnt)

  if a[indexa] > maxi:
    indexd += 1
  elif a[indexa] < mini:
    indexa += 1
  else:
    indexd += 1
    indexa += 1
    cnt += 1

print(cnt)