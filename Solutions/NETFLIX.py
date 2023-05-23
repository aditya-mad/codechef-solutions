test = int(input())

for i in range(test):
    ali, bob, char, tot = map(int, input().split())
    if (ali+bob >= tot) or (bob+char >= tot) or (char+ali >= tot):
        print("YES")
    else:
        print("NO")
