try :
    while True:
        h, m = (int(i) for i in input().split(' '))
        if 7 <= h < 17:
            if h == 7:
                if m >= 30:
                    print('At School')
                else:
                    print('Off School')
            else:
                print('At School')
        else:
            print('Off School')
except EOFError:
    pass