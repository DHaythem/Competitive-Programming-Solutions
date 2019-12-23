#https://codeforces.com/contest/1225/problem/A

a,b=map(int,input().split())
if a==9 and b==1:
    print('99 100')
elif a==b:
    print(a*10,' ',b*10+1)
elif b-a==1:
    print(a*10+9,' ',b*10)
else:
    print(-1)
