import sys

def main():
    readline = sys.stdin.readline
    N = int(readline().strip())
    members = []
    for i in range(N):
        age, name = readline().split()
        members.append((int(age), i, name))
    members.sort(key=lambda x: (x[0], x[1]))
    for age, _, name in members:
        print(age, name)

if __name__ == "__main__":
    main()
