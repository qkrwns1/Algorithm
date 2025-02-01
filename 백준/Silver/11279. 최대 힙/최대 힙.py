import sys

class Heap:
    def __init__(self):
        self.heap = []
    def push(self,val):
        self.heap.append(val)
        idx=len(self.heap)-1
        parent=(idx-1)//2
        while idx>0 and self.heap[idx]>self.heap[parent]:
            self.heap[idx],self.heap[parent]=self.heap[parent],self.heap[idx]
            idx=parent
            parent=(idx-1)//2
    def pop(self):
        if not self.heap:
            return 0
        if len(self.heap)==1:
            return self.heap.pop()
        num=self.heap[0]
        self.heap[0]=self.heap.pop()
        idx=0
        while True:
            left=idx*2+1
            right=idx*2+2
            max_idx=idx
            if left<len(self.heap) and self.heap[left]>self.heap[max_idx]:
                max_idx=left
            if right<len(self.heap) and self.heap[right]>self.heap[max_idx]:
                max_idx=right
            if idx==max_idx:
                break
            self.heap[max_idx],self.heap[idx]=self.heap[idx],self.heap[max_idx]
            idx=max_idx
        return num

def main():
    input=sys.stdin.readline
    n=int(input())
    h=Heap()
    ans=[]
    for _ in range(n):
        x=int(input())
        if x==0:
            ans.append(str(h.pop()))
        else:
            h.push(x)
    print("\n".join(ans))

if __name__=="__main__":
    main()
