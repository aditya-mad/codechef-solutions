test = int(input())

for i in range(test):
    xval, yval = map(int, input().split())
    lhs = (xval ** 4) + 4 * (yval ** 2)
    rhs = 4 * xval * xval * yval
    if lhs == rhs:
        print("YES")
    else:
        print("NO")
