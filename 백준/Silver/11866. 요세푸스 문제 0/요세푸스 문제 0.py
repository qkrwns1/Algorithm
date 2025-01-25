def main():
    n, m = map(int, input().split())
    lst = list(range(1, n + 1)) 
    cnt = 0
    result = []

    for _ in range(n):
        cnt = (cnt + m - 1) % len(lst)
        result.append(lst.pop(cnt))  
    print(f"<{', '.join(map(str, result))}>")  

if __name__ == '__main__':
    main()
