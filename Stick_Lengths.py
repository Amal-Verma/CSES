n = int(input())
arr = list(map(int, input().split()))
arr.sort()
y = arr[len(arr)//2]
print(sum([abs(x- y) for x in arr]))