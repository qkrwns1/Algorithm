import sys

for line in sys.stdin:
    line = line.strip()
    if not line:
        continue
    
    s, t = line.split()
    
    i, j = 0, 0
    len_s, len_t = len(s), len(t)

    while i < len_s and j < len_t:
        if s[i] == t[j]:
            i += 1
        j += 1

    if i == len_s:
        print("Yes")
    else:
        print("No")
