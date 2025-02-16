import sys
from collections import defaultdict

def main():
    n, m = map(int, sys.stdin.readline().strip().split())
    lst = list(map(int, sys.stdin.readline().strip().split()))

    has = defaultdict(int)
    order = {}

    for idx, num in enumerate(lst):
        has[num] += 1
        if num not in order:
            order[num] = idx

    sorted_result = sorted(has.keys(), key=lambda x: (-has[x], order[x]))

    result = []
    for num in sorted_result:
        result.extend([num] * has[num])

    print(" ".join(map(str, result)))

if __name__ == "__main__":
    main()
