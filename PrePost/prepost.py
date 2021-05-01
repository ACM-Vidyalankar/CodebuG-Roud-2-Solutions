def prepost(pre, N):
    pivotPoint = 0
    for i in range(1, N):
        # changed '>=' to '<='
        if (pre[0] <= pre[i]):
            pivotPoint= i
            break

    # changed 'pivotPoint' to 'pivotPoint-1'
    for i in range(pivotPoint - 1, 0, -1):
        print(pre[i], end = " ")
    
    for i in range(N - 1, pivotPoint - 1, -1):
        print(pre[i], end = " ")
    # changed 'pre[i]' to 'pre[0]'
    print(pre[0])


if __name__ == '__main__':
    N = int(input().strip())
    pre = list(map(int, input().strip().split(' ')))
    prepost(pre, N)