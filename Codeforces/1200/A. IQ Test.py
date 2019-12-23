#https://codeforces.com/problemset/problem/287/A

a=input()
b=input()
c=input()
d=input()
k=0
for i in range(3):
    L=[a[i],a[i+1],b[i],b[i+1]]
    if L.count("#")>=3 or L.count(".")>=3:
         print('YES')
         k=1
         break
if k==0:
    for i in range(3):
        L=[b[i],b[i+1],c[i],c[i+1]]
        if L.count("#")>=3 or L.count(".")>=3:
            print('YES')
            k=1
            break
if k==0:
    for i in range(3):
        L=[c[i],c[i+1],d[i],d[i+1]]
        if L.count("#")>=3 or L.count(".")>=3:
            print('YES')
            k=1
            break
if k==0:
    print('NO')
