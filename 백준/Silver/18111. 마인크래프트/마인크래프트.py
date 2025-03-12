import sys

def main():
    r = sys.stdin.readline
    N, M, B = map(int, r().split())
    line = [0]*257
    for _ in range(N):
        for h in map(int, r().split()):
            line[h] += 1

    mt = 10**15
    ah = 0
    for th in range(257):
        rt = 0
        pt = 0
        rb = 0
        pb = 0
        for i in range(257):
            c = line[i]
            if c:
                d = i - th
                if d > 0:
                    rt += d*c*2
                    rb += d*c
                elif d < 0:
                    d = -d
                    pt += d*c
                    pb += d*c
        if pb <= B + rb:
            t = rt + pt
            if t < mt or (t == mt and th > ah):
                mt = t
                ah = th
    print(mt, ah)

main()
