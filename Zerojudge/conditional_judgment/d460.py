try :
    while True:
        age = (int(input()))
        if age <= 5:
            print(0)
        elif 6 <= age <= 11:
            print(590)
        elif 12 <= age <= 17:
            print(790)
        elif 18 <= age <= 59:
            print(890)
        else:
            print(399)
except EOFError:
    pass