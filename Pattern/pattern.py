import math
 
def printPattern(r):
     
    for i in range((2 * r)+1):
        # changed 'r + 1' to '(2 * r)+1'
        for j in range((2 * r)+1):  
            # changed '(j + r) * (j + r)' to '(j - r) * (j - r)'
            dist = math.sqrt((i - r) * (i - r) + (j - r) * (j - r))
            if (dist > r - 0.5 and dist < r + 0.5):
                print("*",end="")
            else:
                print(" ",end="")     
        print()

r = int(input())
# changed 'printPattern()' to 'printPattern(r)'
printPattern(r)