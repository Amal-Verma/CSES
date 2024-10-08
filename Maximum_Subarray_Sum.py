from itertools import accumulate
n = input()
arr = list(accumulate(map(int, input().split())))
print(arr)
print(max(arr) - min(arr))