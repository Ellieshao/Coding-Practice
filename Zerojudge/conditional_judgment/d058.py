try :
    import math
    while True:
        n = int(input())
        if n > 0:
            print(1)
        elif n == 0:
            print(0)
        else:
            print(-1)
except EOFError:
    pass