test = int(input())

for i in range(test):
    num1, num2 = map(int, input().split())
    if (num1 + num2) % 2 == 0:
        print((num1 + num2) // 2)
    else:
        print(-1)
