import sys

class minHeap:
    def __init__(self):
        self.heap = []
    def parent(self, idx):
        return (idx-1)//2
    def left_child(self, idx):
        return (idx*2)+1
    def right_child(self, idx):
        return (idx+1)*2
    def insert(self, value):
        self.heap.append(value)
        self.heapify_up(len(self.heap)-1)
    def heapify_up(self, idx):
        while(idx > 0 and self.heap[idx] < self.heap[self.parent(idx)]):
            self.heap[idx],self.heap[self.parent(idx)] = self.heap[self.parent(idx)], self.heap[idx]
            idx = self.parent(idx)
    def extract_min(self):
        if len(self.heap) == 0:
            return 0
        elif len(self.heap) == 1:
            return self.heap.pop()
        root = self.heap[0]
        self.heap[0] = self.heap.pop()
        self.heapify_down(0)
        return root
    def heapify_down(self, idx):
        smallest = idx
        left, right = self.left_child(idx), self.right_child(idx)
        if left < len(self.heap) and self.heap[left] < self.heap[idx]:
            smallest = left
        if right < len(self.heap) and self.heap[right] < self.heap[smallest]:
            smallest = right
        if smallest != idx:
            self.heap[smallest], self.heap[idx] = self.heap[idx], self.heap[smallest]
            self.heapify_down(smallest)
    def is_empty(self):
        return len(self.heap) == 0
        
def main():
    #print("test")
    input = sys.stdin
    heap = minHeap()
    N = int(input.readline().strip())
    lst = []
    for i in range(N):
        num = int(input.readline().strip())
        if num == 0:
            print(heap.extract_min())
        else:
            heap.insert(num)

if __name__ ==  "__main__":
    main()

