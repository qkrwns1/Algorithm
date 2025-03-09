import sys

def find_permutation():
    N = int(sys.stdin.readline().strip())
    A = list(map(int, sys.stdin.readline().strip().split()))

    indexed_A = [(A[i], i) for i in range(N)]
    indexed_A.sort()

    P = [0] * N
    for new_idx, (_, old_idx) in enumerate(indexed_A):
        P[old_idx] = new_idx

    print(*P)

if __name__ == "__main__":
    find_permutation()
