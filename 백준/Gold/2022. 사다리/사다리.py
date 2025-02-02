def main():
    x,y,c = map(float, input().split())
    n1,n2 = 0.0,min(x,y)
    ans = 0
    while n1+0.001 <= n2:
        w = (n1+n2)/2
        h1 = (x**2-w**2)**0.5
        h2 = (y**2-w**2)**0.5
        guess_c = (h1*h2)/(h1+h2)
        if guess_c >= c:
            ans = w
            n1 = w
        else:
            n2 = w
    print(ans)

if __name__=="__main__":
    main()
