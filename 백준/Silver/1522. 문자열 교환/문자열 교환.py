def main():
    S = input()
    lst = list(S)
    count  = S.count('a')
    n_max = 0
    idx = 0
    for i in range(len(lst)):
        if(i+count > len(lst)):
            n = S.count('a',i,len(S)) + S.count('a',0,i+count - len(S))
        else:
            n = S.count('a',i,i+count)
        if n > n_max:
            n_max = n
            idx = i
        #print(n)
    if(idx+count > len(S)):
        print(S.count('b',idx,len(S)) + S.count('b',0,idx+count - len(S)))
    else:
        print(S.count('b',idx,idx+count))

if __name__ == '__main__':
    main()
