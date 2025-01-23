def main():
    vec =[]
    n = int(input())
    for i in range(n):
        x_y = list(map(int, input().split()))
        vec.append(x_y)
    vec.sort()
    for pair in vec:
        print(pair[0],pair[1])


if __name__ == '__main__':
    main()