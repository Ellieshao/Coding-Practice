try :
    while True:
        cookie, chocolate, cake = (int(i) for i in input().split())
        cookieplus = cookie//10
        cakeplus = cake//2
        chocolate += min(cookieplus, cakeplus)
        print(f"{cookie} 個餅乾，{chocolate} 盒巧克力，{cake} 個蛋糕。")
except EOFError:
    pass