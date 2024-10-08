n = int(input())
arr = list(map(int, input().split()))

a = []
b = []

mini = int(1e9) + 10

def divide(i):
  global mini
  if i == n:
    mini = min(mini, abs(sum(a) - sum(b)))
    return
  
  a.append(arr[i])
  divide(i+1)
  a.pop()
  b.append(arr[i])
  divide(i+1)
  b.pop()

divide(0)

print(mini)
