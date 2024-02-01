test = int(input())

for i in range(test):
    size = int(input())
    nums = list(map(int, input().split()))
    nums.sort()
    for j in range(len(nums)):
        if nums[j] > j + 1:
            print(-1)
            break
    else:
        ans = size * (size + 1) // 2
        ans -= sum(nums)
        print(ans)
