import sys
import math

n = int(sys.stdin.readline().strip())
lst = []

for i in range(n):
    num = int(sys.stdin.readline().strip())
    lst.append(num)

lst = sorted(lst)
err  = 0
for i in range(1,n+1):
    err += abs(lst[i-1] - i)

print(err)

