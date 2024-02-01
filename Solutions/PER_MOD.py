test = int(input())

for i in range(test):
    num = int(input())
    print(2, end=" ")
    for j in range(1, num - 1):
        print(j + 2, end=" ")
    print(1)