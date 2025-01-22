m = int(input())
for m1 in range(m):
    S= input()
    S_lst = list(S)
    n_max = 0
    c = '0'
    for c1 in S_lst:
        n = 0
        if c1 == ' ' or c1 == '0':
            continue
        for idx in range(len(S)):
            c2 = S_lst[idx]
            if(c1 == c2):
                n+=1
                S_lst[idx] = '0'
                if(n == n_max):
                    c = '?'
                if(n > n_max):
                    n_max = n
                    c = c1
        #print(c1, n)
    print(c)            