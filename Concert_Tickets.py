import bisect

tic, mxp = map(int, input().split())
ticarr = list(map(int, input().split()))
mxparr = list(map(int, input().split()))

ticarr.sort()

for x in mxparr:
  idx = bisect.bisect(ticarr, x) - 1
  if idx == -1:
    print(-1)
  else:
    print(ticarr[idx])
    del ticarr[idx]
  