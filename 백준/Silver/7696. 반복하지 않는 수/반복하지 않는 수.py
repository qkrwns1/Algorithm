import sys

def func():
    lst = [0] * 11
    lst[1] = 9
    
    total = 9
    num = 9

    for i in range(2, 11):
        total *= (10 - (i - 1))
        lst[i] = lst[i - 1] + total

    return lst

def find_nth_number(N, lst):
    idx = 1
    while N > lst[idx]:
        idx += 1

    N -= lst[idx - 1]

    used = set()
    num = 0

    for i in range(idx, 0, -1):
        for digit in range(10):
            if digit == 0 and i == idx:
                continue
            if digit in used:
                continue
            
            remaining = 1
            available_digits = 10 - len(used) - 1
            for j in range(i - 1):
                remaining *= available_digits
                available_digits -= 1
            
            if N > remaining:
                N -= remaining
            else:
                num = num * 10 + digit
                used.add(digit)
                break

    return num

def main():
    input = sys.stdin
    lst = func()

    while True:
        try:
            N = int(input.readline().strip())
            if N == 0:
                break
            print(find_nth_number(N, lst))
        except:
            break

if __name__ == "__main__":
    main()
