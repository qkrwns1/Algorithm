import sys
from collections import deque

def is_vps(line: str)-> bool:
    cnt =0
    for ch in line:
        if ch =='(':
            cnt +=1 
        else:
            cnt -= 1
            if cnt < 0:
                return False
    return cnt == 0

def main():
    readline = sys.stdin.readline
    N = int(readline().strip())
    for _ in range(N):
        line = readline().strip()
        if is_vps(line):
            print("YES")
        else:
            print("NO")
        
        
        
    

if __name__ == "__main__":
    main()
