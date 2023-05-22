try :
    import math
    while True:
        t = int(input())
        for i in range(t):
            n, m = (int(i) for i in input().split())
            print(int(((math.ceil((n-2)/3)*1)/1.0)*((math.ceil((m-2)/3)*1)/1.0)))
except EOFError:
    pass