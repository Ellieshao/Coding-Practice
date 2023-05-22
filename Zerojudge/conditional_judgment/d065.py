try :
    import math
    while True:
        nlist = [int(i) for i in input().split()]
        print(max(nlist))
except EOFError:
    pass