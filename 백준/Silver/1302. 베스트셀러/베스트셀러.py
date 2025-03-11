import sys
       
def main():
    #print("test")
    input = sys.stdin
    lst = []
    N =  int(input.readline().strip())
    for i in range(N):
        st = input.readline().strip()
        lst.append(st)
    most = max(sorted(set(lst)),key = lst.count)
    print(most)

    

if __name__ ==  "__main__":
    main()

