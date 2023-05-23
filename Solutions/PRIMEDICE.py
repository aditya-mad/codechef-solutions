test = int(input())

for i in range(test):
    alice, bob = map(int, input().split())
    count = 0
    for i in range(2, alice + bob):
        if (alice + bob) % i == 0:
            count += 1
    if count == 0:
        print("Alice")
    else:
        print("Bob")
