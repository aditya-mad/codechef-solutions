test = int(input())

for i in range(test):
    num = int(input())
    pile = list(map(int, input().split()))
    win = {}
    for j in pile:
        if j not in win:
            win[j] = 1
        else:
            win[j] += 1
    key = list(win.keys())
    key.sort()
    ans = False
    for j in key[::-1]:
        if win[j] % 2 == 1:
            ans = True
            break
    if ans:
        print("Marichka")
    else:
        print("Zenyk")
