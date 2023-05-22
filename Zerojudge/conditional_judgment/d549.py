try :
    import math
    while True:
        pa, pb, pc = (int(i) for i in input().split())
        print('%.2f' % (math.sqrt(pa**2 + pc**2 - pb**2)))
except EOFError:
    pass