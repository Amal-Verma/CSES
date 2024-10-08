from itertools import permutations

s = input()
p = permutations(s)
se = {x for x in p}

print(len(se))
for x in sorted(se): print(''.join(x))
