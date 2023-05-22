try :
    import math
    dic = {
        '0 1 0 1':'A',
        '0 1 1 1':'B',
        '0 0 1 0':'C',
        '1 1 0 1':'D',
        '1 0 0 0':'E',
        '1 1 0 0':'F'
    }
    while True:
        s = int(input())
        for i in range(s):
            code = str(input())
            print(dic[code], end='')
        print()
except EOFError:
    pass