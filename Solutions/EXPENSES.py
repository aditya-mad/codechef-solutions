test = int(input())

for i in range(test):
    num1, num2 = map(int, input().split())
    print((2**num2)//(2**num1))
