import sys
import math

def isPrime(a):
    if a < 2:
        return False
    if a == 2:
        return True
    if a % 2 == 0:
        return False
    for i in range(3, int(math.sqrt(a)) + 1, 2):
        if a % i == 0:
            return False
    return True

n, m = map(int, sys.stdin.readline().split())

for i in range(n, m + 1):
    if isPrime(i):
        print(i)
