test = int(input())
win = ['111', '110', '011']
leave = ['101']
dont = '000'
change = []

for _ in range(test):
    size = int(input())
    binary = input()
    current = binary.index('1')

    for i in range(current + 1, size):
        if binary[i] == '1':
            diff = current - i
            current = i
            if diff % 2 == 1:
                print(1)
                break
    else:
        print(2)
