def main():
    n,m = map(int, input().split())
    lst1 = []
    lst2 = []
    for i in range(n):
        s = input()
        lst1.append(s)
    for i in range(m):
        s = input()
        lst2.append(s)
    lst3 = set(lst1) & set(lst2)
    print(len(lst3))
    lst3 = sorted(lst3)
    
    for ls in lst3:
        print(ls)
    

if __name__ == '__main__':
    main()
