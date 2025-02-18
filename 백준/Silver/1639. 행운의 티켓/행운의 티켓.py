import sys 

def main():
    input = sys.stdin.readline()
    num = []
    num = list(input.strip())
    max_len  = 0
    #print(len(num))
    num = [int(ch) for ch in num]
    for i in range(len(num)):
        l = 0
        sum_left = 0
        sum_right = 0
       
        j = i + 1
        k = i
        while(k >= 0 and j < len(num)):
            sum_left += num[k]
            sum_right += num[j]
            k -= 1
            j += 1
            l += 1
            if(sum_left == sum_right):
                if l > max_len:
                    max_len = l
    print(2*max_len)
                
        
        

if __name__ == "__main__":
    main()
