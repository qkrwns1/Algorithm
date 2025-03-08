import sys
import heapq

def main():
    # 입력 받기
    N, M = map(int, sys.stdin.readline().strip().split())
    numbers = list(map(int, sys.stdin.readline().strip().split()))

    # 최소 힙 생성 후 모든 원소 삽입
    heapq.heapify(numbers)  # O(N)으로 리스트를 최소 힙으로 변환

    # M번째 작은 수 찾기
    for _ in range(M - 1):
        heapq.heappop(numbers)  # 최솟값을 M-1번 제거

    print(heapq.heappop(numbers))  # M번째 작은 수 출력

if __name__ == "__main__":
    main()