def main():
    n,m = map(int, input().split())
    lst= []
    ans = []
    for i in range(n):
        st = input()
        lst.append(st)
    cnt = 0
    for i in range(m):
        st = input()
        if st in lst:
            cnt += 1
    print(cnt)

if __name__=="__main__":
    main()
