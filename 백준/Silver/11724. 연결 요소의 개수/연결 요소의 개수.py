def dfs(idx, graph, vis):
    S = [idx]
    vis[idx] = True
    while S:
        node = S.pop()
        for next in graph[node]:
            if not vis[next]:
                vis[next] = True
                S.append(next)

def main():
    import sys
    input = sys.stdin.readline
    n, m = map(int, input().split())
    lst = list(range(1, n))
    graph = [[] for _ in range(n)]
    for _ in range(m):
        a, b = map(int, input().split())
        graph[a-1].append(b-1)
        graph[b-1].append(a-1)
    vis = [False]*n
    count = 0
    for i in range(n):
        if not vis[i]:
            dfs(i, graph, vis)
            count += 1
    print(count)

if __name__ == "__main__":
    main()
