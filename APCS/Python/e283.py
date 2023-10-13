try :
    import math
    dic = {
        '0 1 0 1':'A',
        '0 1 1 1':'B',
        '0 0 1 0':'C',
        '1 1 0 1':'D',
        '1 0 0 0':'E',
        '1 1 0 0':'F'
    }
    while True:
        s = int(input())
        for i in range(s):
            code = str(input())
            print(dic[code], end='')
        print()
except EOFError:
    pass

from sys import stdin
d = {'0 1 0 1':'A',
     '0 1 1 1':'B',
     '0 0 1 0':'C',
     '1 1 0 1':'D',
     '1 0 0 0':'E',
     '1 1 0 0':'F'}
for read in stdin:
    read=int(read)
    ans=''
    for i in range(read):
        s=stdin.readline().rstrip()
        ans+=d[s]
print(ans)