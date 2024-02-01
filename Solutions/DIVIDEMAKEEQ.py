import math

test = int(input())

for i in range(test):
    size = int(input())
    nums = list(map(int, input().split()))
    gcd_temp = nums[0]
    for num in nums:
        gcd_temp = math.gcd(gcd_temp, num)

    print(len(nums) - nums.count(gcd_temp))
