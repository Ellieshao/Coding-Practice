try :
    while True:
        t = int(input())
        if t < 25:
            print(25 - t)
        elif t > 25:
            print(60 - t + 25)
        else:
            print(0)
except EOFError:
    pass