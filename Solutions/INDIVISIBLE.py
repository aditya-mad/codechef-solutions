test = int(input())

for _ in range(test):
    num1, num2, num3 = map(int, input().split())
    for i in range(2, 100):
        if num1 % i != 0 and num2 % i != 0 and num3 % i != 0:
            print(i)
            break
