test = int(input())

for _ in range(test):
    total, eat = map(int, input().split())
    item = list(map(int, input().split()))
    cost = list(map(int, input().split()))
    uniq = {}

    for i in item:
        uniq[i] = 1000000
    for i in range(total):
        if cost[i] < uniq[item[i]]:
            uniq[item[i]] = cost[i]
    if eat > len(uniq.keys()):
        print(-1)
    else:
        ans = sorted(uniq.values())
        total = 0
        for i in range(eat):
            total += ans[i]
        print(total)
