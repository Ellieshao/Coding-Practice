try :
    import math
    while True:
        n = 0
        a, b = [int(i) for i in input().split(' ')]
        n = math.ceil((b-a)/2) #數字量除2
        if a % 2 == 0 and b % 2 ==0: #如果頭尾都是偶數+1
            n += 1
        print(n)
except EOFError:
    pass