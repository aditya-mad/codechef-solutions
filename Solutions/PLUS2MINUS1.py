import math

test = int(input())

for i in range(test):
    num = int(input())
    # ans = math.factorial(num)
    ans = 3 * num
    if num == 0:
        print(1)
    else:
        print(ans)
