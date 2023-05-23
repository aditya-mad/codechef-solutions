test = int(input())

for i in range(test):
    size = int(input())
    word = input()
    size = size // 2
    if word[:size] == word[size:]:
        print("YES")
    else:
        print("NO")
