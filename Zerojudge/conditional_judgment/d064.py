try :
    while True:
        i = (int(input()))
        if i % 2 == 0:
            print('Even')
        else:
            print('Odd')
except EOFError:
    pass