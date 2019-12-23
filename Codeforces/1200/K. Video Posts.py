#https://codeforces.com/problemset/problem/1070/K

n,t=map(int,input().split())
l=list(map(int, input().split()))
test=1
s=sum(l)
v=s/t
if s%t != 0:
    print('No')
    test=0
i,j=0,0
f=[]
while test and i<len(l):
    a=0
    while a<v:
        a+=l[i]
        i+=1
    if a>v:
        print('No')
        test=0
    else:
        f.append(i+1-j-1)
        j=i
if test:
    print('Yes')
    print(*(_ for _ in f))
