try :
    while True:
        a, b, c = map(int, input().split(" "))
        s = (a+b+c)/2
        print(int(s*(s-a)*(s-b)*(s-c)))
except EOFError:
    pass