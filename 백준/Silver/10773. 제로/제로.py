n = int(input())
Q = []
for i in range(n):
    num = int(input())
    if num == 0:
        Q.pop()
    else:
        Q.append(num)
print(sum(Q))
    
