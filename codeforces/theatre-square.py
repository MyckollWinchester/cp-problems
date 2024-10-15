from math import ceil
n, m, a = input().split(" ")
n, m, a = int(n), int(m), int(a)
print(ceil(n/a)*ceil(m/a))
