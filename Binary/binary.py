import sys

def max(a,b):
    return a if a>b else b

n = int(input().strip())

max_num = 0
# Changed from 'n' to '0'
count = 0

while n:
    # changed from 'n&2' to 'n&1' 
    while n&1:
        count += 1
        n>>=1
    max_num = max(count, max_num)
    if not n&1:
        count = 0
        # changed from 'n>>=2' to 'n>>=1' 
        n>>=1

print("Maximum consecutive 1 in binary:", max_num)