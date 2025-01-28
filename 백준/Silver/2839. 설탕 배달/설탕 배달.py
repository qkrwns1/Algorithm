def main():
    num = int(input())
    n3 = 0
    n5 = 0
    n5_max = num // 5
    while(n5_max >= 0):
        n = num - n5_max * 5
        if(n % 3 == 0):
            n3 = n / 3
            n5 = n5_max
            break
        else:
            n5_max -= 1

    if(n5_max == -1):
        print("-1")
    else:
        print(int(n3+n5))

if __name__ == '__main__':
    main()
