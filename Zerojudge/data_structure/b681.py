try :
    while True:
        x = int(input())
        if x < 0:
            print(abs(x)*2)
        else:
            print(abs(x)*2-1)
except EOFError:
    pass