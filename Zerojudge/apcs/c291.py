try :
    while True:
        count = 0
        n = int(input())
        friend_list = list(input().split())
        check_list = []
        for i in range(n):
            check_list.append()
        for i in  range (n):
            a = int(friend_list[i])
            while a != 'x':
                a = int(friend_list[a])
                check_list[a] = 'x'
                count += 1
        print (count)
except EOFError:
    pass