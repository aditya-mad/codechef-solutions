test = int(input())

for i in range(test):
    size = int(input())
    nums = list(map(int, input().split()))
    oddnums = 0
    for j in nums:
        if j % 2 != 0:
            oddnums += 1
    if (oddnums % 2 == 0) and oddnums > 0:
        print("YES")
    else:
        print("NO")
