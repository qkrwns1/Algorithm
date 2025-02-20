import sys
from collections import defaultdict

def main():
    n  = int(sys.stdin.readline().strip())

    def is_square(k):
        x = 1
        while x * x <= k:
            if x * x == k:
                return True
            x += 1
        return False

    if is_square(n):
        print(1)
        return

    x = 1
    while x * x <= n:
        if is_square(n - x * x):
            print(2)
            return
        x += 1

    x = 1
    while x * x <= n:
        y = 1
        while y * y <= n - x * x:
            if is_square(n - x * x - y * y):
                print(3)
                return
            y += 1
        x += 1

    print(4)
if __name__ == "__main__":
    main()
