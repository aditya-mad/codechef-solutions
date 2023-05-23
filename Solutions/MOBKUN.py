test = int(input())

for i in range(test):
    N, M, K, X = map(int, input().split())
    cycle = (N * K) + M
    check = X % cycle
    fac = N * (K - 1)
    if (check > fac) or check == 0:
        print("YES")
    else:
        print("NO")
