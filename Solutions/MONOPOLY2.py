test = int(input())

for i in range(test):
    c1, c2, c3, c4 = map(int, input().split())
    if c1 > (c2 + c3 + c4) or c2 > (c1 + c3 + c4) or c3 > (c2 + c1 + c4) or c4 > (c2 + c3 + c1):
        print("YES")
    else:
        print("NO")
