test = int(input())

for i in range(test):
    num = int(input())
    tot = num // 10
    tot *= 10
    remai = num % 10
    if remai < 5:
        print(100 - tot)
    else:
        print(90 - tot)
