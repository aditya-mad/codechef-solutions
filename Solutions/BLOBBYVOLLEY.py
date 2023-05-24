test = int(input())

for j in range(test):
    size = int(input())
    score = input()
    alice = 0
    bob = 0
    turn = 'A'
    for i in score:
        if turn == 'A' and i == 'A':
            alice += 1
        elif turn == 'B' and i == 'B':
            bob += 1
        elif turn == 'A' and i == 'B':
            turn = 'B'
        elif turn == 'B' and i == 'A':
            turn = 'A'
    print(alice, bob)
