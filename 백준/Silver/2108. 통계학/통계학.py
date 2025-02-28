import sys
import statistics

def main():
    readline = sys.stdin.readline
    max_num = float('-inf')
    min_num = float('inf')
    avg = 0
    nums = []
    freq_nums = {}

    N = int(readline().strip())
    for _ in range(N):
        num = int(readline().strip())
        nums.append(num)
        avg += num
        max_num = max(num, max_num)
        min_num = min(num, min_num)
        if num in freq_nums:
            freq_nums[num] += 1
        else:
            freq_nums[num] = 1

    nums.sort()
    median = statistics.median(nums)

    max_count = max(freq_nums.values())
    modes = sorted([num for num in freq_nums if freq_nums[num] == max_count])
    mode = modes[1] if len(modes) > 1 else modes[0]

    avg = round(avg / N)

    print(avg)
    print(median)
    print(mode)
    print(abs(max_num - min_num))

if __name__ == "__main__":
    main()
