test = int(input())

for i in range(test):
    size = int(input())
    nums = list(set(list(map(int, input().split()))))
    nums.sort()
    print(nums[-1] + nums[-2])
