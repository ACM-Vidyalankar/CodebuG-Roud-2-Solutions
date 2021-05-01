def one(s):
    l = len(s)
    output = ""
    # changed '(1,l,2)' to '(0,l,2)'
    for i in range(0,l,2):
        # changed 'i++' to 'i'
        output += s[i]
    return output

def two(s):
    l = len(s)
    output = ""
    # changed '(1,l,2)' to '(0,l,2)'
    for i in range(1,l,2):
        # changed 'i++' to 'i'
        output += s[i]
    return output

t = int(input())
for a0 in range(0,t):
    s = input()
    # changed 'one() + " " + two()' to 'one(s) + " " + two(s)'
    print(one(s) + " " + two(s))