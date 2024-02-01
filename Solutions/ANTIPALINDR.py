test = int(input())

for i in range(test):
    alph = [chr(x) for x in range(ord('a'), ord('z') + 1)]
    memo = {}
    # for j in alph:
    #     memo[j] = 0
    size = int(input())
    string = input()
    notused = 26
    for j in string:
        if j not in memo:
            memo[j] = 1
            notused -= 1
        else:
            memo[j] += 1

    odd = 0

    for j in memo:
        if memo[j] % 2 == 1:
            odd += 1

    if odd > 1:
        print(0)
        continue
    if odd == 0:
        print(1)
        continue
    if odd == 1 and notused < 25:
        print(1)
        continue
    else:
        print(2)
        continue

        s
