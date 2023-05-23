test = int(input())

for cases in range(test):
    length = int(input())
    binary_string = input()
    changed_string = ""
    start, ending = 0, len(binary_string) - 1
    for i in range(len(binary_string)):
        if i % 2 == 0:
            if binary_string[start] == '0':
                changed_string = binary_string[start] + changed_string
            else:
                changed_string += binary_string[start]
            start += 1
        else:
            if binary_string[ending] == '1':
                changed_string = binary_string[ending] + changed_string
            else:
                changed_string += binary_string[ending]
            ending -= 1

    print(changed_string)
