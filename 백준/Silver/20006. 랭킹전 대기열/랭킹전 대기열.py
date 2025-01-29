def main():
    n,m = map(int,input().split())
    lst = []
    room = []
    for i in range(n):
        level, name = map(str,input().split())
        level = int(level)
        lst.append((level,name))
    for level,name in lst:
        TF = False
        for r in room:
            r1, r2 = r  
            if len(r2) < m and (r1 - 10) <= level <= (r1 + 10):
                r2.append((level, name)) 
                TF = True
                break  
        if TF == False:
            room.append([level, [(level, name)]])

    for r in room:
        r1, r2 = r
        r2.sort(key=lambda x:x[1])
        if len(r2) == m:
            print("Started!")
        else:
            print("Waiting!")
        for r3 in r2:
            print(r3[0], r3[1])




if __name__ == '__main__':
    main()
