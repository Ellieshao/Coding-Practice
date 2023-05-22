try :
    while True:
        n = int(input())
        if n%2 == 0:
            print(n)
        else:
            print(n-1)
except EOFError:
    pass