try :
    while True:
        X1, Y1, X2, Y2 = (int(i) for i in input().split())
        dX = abs(X1 - X2)
        dY = abs(Y1 - Y2)
        

        print(min(dX, dY) + abs(dX - dY))
except EOFError:
    pass