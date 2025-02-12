import sys 

def main():
    input = sys.stdin.readline
    n = int(input())
    lst = map(int, input().split())
    lst = sorted(lst)
    sum = 0
    for i in range(n):
        for j in range(i+1):
           sum += lst[j]
    print(sum)
        

if __name__ == "__main__":
    main()
