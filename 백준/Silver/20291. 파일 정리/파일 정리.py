import sys
from collections import defaultdict

n = int(sys.stdin.readline().strip())
file_extensions = defaultdict(int)

for _ in range(n):
    file_name = sys.stdin.readline().strip()
    extension = file_name.split('.')[-1] 
    file_extensions[extension] += 1

for ext in sorted(file_extensions.keys()):
    print(ext, file_extensions[ext])
