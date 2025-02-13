import sys

def main():
    input = sys.stdin.readline
    result = -1
    n = int(input().strip())
    for five_count in range(n // 5, -1, -1):
        remainder = n - (five_count * 5)
        if remainder % 2 == 0:
            two_count = remainder // 2
            result = five_count + two_count
            break
    print(result)

    

if __name__=="__main__":
    main()
