test = int(input())

for i in range(test):
    date = input()
    d1, d2 = True, True
    check1 = int(date[:2])
    check2 = int(date[3:5])
    if check1 < 13:
        d1 = False
    if check2 < 13:
        d2 = False

    if d1 == False and d2 == False:
        print("BOTH")
    elif d1 and d2 == False:
        print("DD/MM/YYYY")
    else:
        print("MM/DD/YYYY")
