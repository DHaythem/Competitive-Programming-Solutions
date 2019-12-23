#https://codeforces.com/contest/1230/problem/A

a,b,c,d=map(int,input().split())
test='NO'
if a+b==c+d:
    test='YES'
elif a+c==b+d:
    test='YES'
elif a+d==b+c:
    test='YES'
elif a+b+c==d:
    test='YES'
elif a+b+d==c:
    test='YES'
elif b+c+d==a:
    test='YES'
elif a+c+d==b:
    test='YES'
print(test)
