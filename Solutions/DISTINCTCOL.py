test = int(input())

for i in range(test):
    colours = int(input())
    nums = list(map(int, input().split()))
    print(max(nums))
