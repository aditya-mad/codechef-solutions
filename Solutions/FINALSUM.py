test = int(input())

for _ in range(test):
    sz_qur = list(map(int, input().split()))
    array_input = list(map(int, input().split()))
    total = sum(array_input)
    for i in range(sz_qur[1]):
        lenghts = list(map(int, input().split()))
        temp = lenghts[1] - lenghts[0]

        if temp % 2 == 0:
            total += 1

    print(total)
