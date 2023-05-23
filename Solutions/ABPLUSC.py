test = int(input())

for i in range(test):
    num = int(input())
    quo = 1000000
    if num == 1:
        print(-1)
    elif num >= quo:
        if num == quo:
            print(f"{1} {num - 1} {1}")
        elif num % quo == 0:
            print(f"{num // quo - 1} {quo} {quo}")
        else:
            print(f"{quo} {num // quo} {num % quo}")
    else:
        print(f"{1} {num - 1} {1}")
