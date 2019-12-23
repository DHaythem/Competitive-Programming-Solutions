#https://codeforces.com/contest/1257/problem/B

t=int(input())
for _ in range(t):
    x,y=map(int,input().split())
    if x>3:
        print('yes')
    elif x in [2,3] and y<4:
        print('yes')
    elif x==y:
        print('yes')
    else:
        print('no')
