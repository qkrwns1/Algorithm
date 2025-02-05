import sys

def main():
    input = sys.stdin.readline
    n,m = map(int, input().split())
    lst= []
    dic = {}
    for i in range(n):
        st = input().strip()
        if len(st) < m:
            continue
        if st in dic:
            dic[st] += 1
        else:
            dic.setdefault(st, 1)
    dic_sorted = sorted(dic.items(), key=lambda item: (-item[1],-len(item[0]),item[0]))
    for k,v in dic_sorted:
        print(k)

    

if __name__=="__main__":
    main()
