test = int(input())

for i in range(test):
    size, x1, y1, x2, y2 = map(int, input().split())
    possible1, possible2, possible3, possible4, possible5 = 0, 0, 0, 0, 0
    if x1 == x2 and y1 == y2:
        print(0)
    else:
        possible1 = abs(x2 - x1) + abs(y2 - y1)
        possible2 = min(x1, size + 1 - x1) + min(y2, size + 1 - y2)
        possible3 = min(y1, size + 1 - y1) + min(x2, size + 1 - x2)
        possible4 = min(y1, size + 1 - y1) + min(y2, size + 1 - y2)
        possible5 = min(x1, size + 1 - x1) + min(x2, size + 1 - x2)

        final = min(possible1, min(possible2, min(
            possible3, min(possible4, possible5))))

        print(final)
