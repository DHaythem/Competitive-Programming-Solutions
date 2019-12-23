#https://codeforces.com/contest/1213/problem/A

n=int(input())
l=list(map(int, input().split()))
p,np=0,0
for i in l:
    if i%2==0:
        p+=1
    else:
        np+=1
if p<=np:
    print(p)
else:
    print(np)
