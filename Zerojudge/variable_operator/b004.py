try :
    import math
    while True:
        D, L = (int(i) for i in input().split())
        A = math.pi*(L/2)*math.sqrt((L/2*L/2)-(D/2*D/2))
        print('%.3f' % A)
except EOFError:
    pass