import sys

def main():
    readline = sys.stdin.readline
    n, m = map(int, readline().split())
    lst = []
    for i in range(n):
        num = list(map(int, readline().split()))
        lst.append(num)
    #print(lst)
    prefix_sum = [[0]*(n+1) for _ in range(n+1)]
    for i in range(1, n+1):
        for j in range(1, n+1):
            prefix_sum[i][j] = lst[i-1][j-1] + prefix_sum[i-1][j] + prefix_sum[i][j-1] - prefix_sum[i-1][j-1]
    #print(prefix_sum)
    for i in range(m):
        sum_lst = 0
        x1,y1,x2,y2 = map(int, readline().split())
        x,y = x1,y1
        #print(prefix_sum[x2][y2],prefix_sum[max(x1,x2)][min(y1,y2)-1],prefix_sum[min(x1,x2)-1][max(y1,y2)],prefix_sum[min(x1,x2)-1][min(y1,y2)-1])
        sum_lst = prefix_sum[x2][y2] - prefix_sum[max(x1,x2)][min(y1,y2)-1] - prefix_sum[min(x1,x2)-1][max(y1,y2)] + prefix_sum[min(x1,x2)-1][min(y1,y2)-1]
        print(sum_lst)
if __name__ == "__main__":
    main()
