test = int(input())

for i in range(test):
    size, swaps = map(int, input().split())
    final = size * (size - 1)//2
    if swaps >= size//2:
        print(final)
    else:
        final -= (size - 2 * swaps) * (size - 2 * swaps - 1)//2
        print(final)
