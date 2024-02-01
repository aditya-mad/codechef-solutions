test = int(input())

for i in range(test):
    binary = input()
    if binary[0] == binary[-1]:
        print(len(binary) - 2)
    else:
        print(2)
