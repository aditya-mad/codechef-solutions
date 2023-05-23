test = int(input())

for i in range(test):
    N, K, V = map(int, input().split())
    nums = list(map(int, input().split()))
    half_sum = sum(nums)

    if ((((V*(N + K)) - half_sum) % K) == 0) and (((V*(N + K)) - half_sum)//K > 0):
        print(((V*(N + K)) - half_sum) // K)
    else:
        print(-1)
