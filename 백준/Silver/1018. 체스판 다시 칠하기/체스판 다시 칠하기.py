def main():
    row,col = map(int,input().split())
    grid  = []
    for i in range(row):
        grid.append(list(input().strip()))
    UC_min = row*col
    for i in range(row - 7):
        for j in range(col - 7):
            #print(i,j)
            UC_B = 0
            UC_W = 0
            for x in range(8):
                for y in range(8):
                    if(x+y)%2 == 0:
                        if(grid[i+x][j+y]=='W'):
                            UC_B +=1
                        else:
                            UC_W +=1
                    else:
                        if(grid[i+x][j+y]=='W'):
                            UC_W +=1
                        else:
                            UC_B +=1                    
            UC_min = min(UC_B,UC_W,UC_min)
    print(UC_min)

if __name__ == '__main__':
    main()
