import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
numberOfSwaps = 0
for i in range(0,n):
    # Changed from 'n+1' to 'n-1'
    for j in range(0, n-1):
        # changed from '>=' to '>'
        if (a[j] > a[j + 1]):
            temp=a[j]
            a[j] = a[j+1]
            a[j+1] = temp
            numberOfSwaps += 1
    # changed from '!=' to '=='
    if (numberOfSwaps == 0):
        break

print( "Array is sorted in " + str(numberOfSwaps) + " swaps." )
print( "First Element of sorted array: " + str(a[0]) )
print( "Last Element of sorted array: " +  str(a[n-1]) )