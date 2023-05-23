try :
    while True:
        n = list(input())
        A = []
        B = []
        for i in range(len(n)):
            n[i] = int(n[i])
            if i % 2 == 0:
                B.append(n[i])
            else:
                A.append(n[i])
        print(abs(sum(A)-sum(B)))
except EOFError:
    pass