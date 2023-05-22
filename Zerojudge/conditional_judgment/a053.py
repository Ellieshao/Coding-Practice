try :
    while True:
        s = int(input())
        if 0 <= s <= 10:
            print(s*6)
        elif 10 < s <= 20:
            print(60 + (s-10)*2)
        elif 20 < s <= 40:
            print(80 + (s-20)*1)
        else:
            print(100)
except EOFError:
    pass