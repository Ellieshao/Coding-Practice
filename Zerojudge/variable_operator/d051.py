try :
    while True:
        f = int(input())
        #print(round((f-32)*5/9, 3))
        print('%.3f' % ((f-32)*5/9))
except EOFError:
    pass