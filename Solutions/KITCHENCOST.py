test = int(input())

for _ in range(test):
    total, fresh = map(int, input().split())
    items = list(map(int, input().split()))
    cost = list(map(int, input().split()))
    ans = 0
    for i in range(total):
        if items[i] >= fresh:
            ans += cost[i]
    print(ans)
