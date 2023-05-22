try :
    while True:
        a, b = (int(i) for i in input().split())
        print(a*b-1)
except EOFError:
    pass