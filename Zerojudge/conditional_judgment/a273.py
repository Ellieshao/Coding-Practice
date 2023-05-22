try :
    while True:
        n, k = (int(i) for i in input().split())
        if n != 0 and k == 0:
            print('Impossib1e!')
        elif n == 0 and k == 0:
            print('Ok!')
        elif n % k == 0:
            print('Ok!')
        else:
            print('Impossib1e!')
except EOFError:
    pass