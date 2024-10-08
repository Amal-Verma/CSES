a =  ['0', '1']
for i in range(1, int(input())): a = ['0' + x for x in a] + ['1' + x for x in reversed(a)]
for x in a: print(x)