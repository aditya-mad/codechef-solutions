test = int(input())

for i in range(test):
    size = int(input())
    binary1 = input()
    binary2 = input()
    if binary2.count('1') == binary1.count('1'):
        if binary1.count('0') == binary2.count('0'):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
