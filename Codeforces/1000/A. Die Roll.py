#https://codeforces.com/problemset/problem/9/A

a,b=map(int,input().split())
mx=max(a,b)
if mx==6:
    print('1/6')
if mx==5:
    print('1/3')
if mx==4:
    print('1/2')
if mx==3:
    print('2/3')
if mx==2:
    print('5/6')
if mx==1:
    print('1/1')
