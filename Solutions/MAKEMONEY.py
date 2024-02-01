test = int(input())

for i in range(test):
    N, X, C = map(int, input().split())
    nums = list(map(int, input().split()))
    cost = 0
    for coins in nums:
        if coins < (X - C):
            cost += (X - C)
        else:
            cost += coins
    print(cost)
