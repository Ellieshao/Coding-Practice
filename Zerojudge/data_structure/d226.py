try :
    while True:
        v, t = [int(i) for i in input().split()]
        x = v*t
        print(2*x)
except EOFError:
    pass