import sys

def main():
    readline = sys.stdin.readline
    N = int(readline().strip())
    tips = [int(readline().strip()) for _ in range(N)]

    tips.sort(reverse=True)

    total_tip = 0
    for i in range(N):
        tip = tips[i] - i
        if tip > 0:
            total_tip += tip

    print(total_tip)

if __name__ == "__main__":
    main()
