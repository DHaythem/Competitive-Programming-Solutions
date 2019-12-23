#https://codeforces.com/problemset/problem/844/A

ch=input()
k=int(input())
d={}
for e in ch:
    if e in d:
        d[e]+=1
    else:
        d[e]=1
n=len(d)
if n>=k:
    print(0)
else:
    s=0
    for e in d:
        if d[e]>1:
            s+=d[e]-1
    if n+s>=k:
        print(k-n)
    else:
        print('impossible')
