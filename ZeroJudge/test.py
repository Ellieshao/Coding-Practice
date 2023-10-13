a = int(input())#輸入學生人數
b = sorted(list(map(int,input().split()))) #輸入各學生分數
#b = b[::-1] 可反向排序
print(*b)

for i in range(len(b)-1,-1,-1):
    if b[i]<60:
        print(b[i])
        break        
else:
    print("best case")

for i in b:
    if i>=60:
        print(i)
        break
else:
    print("worst case")  