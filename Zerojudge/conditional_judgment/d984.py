#寫超久但沒注意到要達成棄保效應要符合A!>B+C and B>C ->B當選
'''try :
    import math
    dic = {0:'A', 1:'B', 2:'C'}
    while True:
        cList = [int(i) for i in input().split()]
        cList[cList.index(max(cList))] = min(cList)
        win = cList.index(max(cList))  
        print(dic[win])
except EOFError:
    pass
'''

try :
    import math
    while True:
        a, b, c = (int(i) for i in input().split())
        if (a>b+c) or (c>a>b and a+b>c) or (b>a>c and a+c>b):
            print('A')
        elif (b>a+c) or (c>b>a and b+a>c) or (a>b>c and b+c>a):
            print('B')
        else:
            print('C')
except EOFError:
    pass

'''
try :
    import math
    while True:
        a, b, c = (int(i) for i in input().split())
        if a>b+c:
            print('A')
        elif b>a+c:
            print('B')
        elif c>a+b:
            print('C')
        elif a>b & a>c:
            if b>c:
                print('B')
            if c>b:
                print('C')
        elif b>a & b>c:
            if a>c:
                print('A')
            if c>a:
                print('C')
        elif c>a & c>b:
            if a>b:
                print('A')
            if b>a:
                print('B')
except EOFError:
    pass
'''
'''
try :
    import math
    while True:
        a, b, c = (int(i) for i in input().split())
        if (a>b+c):
            print('A')
        elif (c>a>b and a+b>c):
            print('A')
        elif (b>a>c and a+c>b):
            print('A')
        elif (b>a+c):
            print('B')
        elif (c>b>a and b+a>c):
            print('B')
        elif (a>b>c and b+c>a):
            print('B')
        else:
            print('C')
except EOFError:
    pass
'''