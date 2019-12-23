#https://codeforces.com/contest/1200/problem/A

n=int(input())
ch=input()
b=[0]*10
for e in ch:
    if e=='L':
        i=b.index(0)
        b[i]=1
    elif e=='R':
        b.reverse()
        i=b.index(0)
        b[i]=1
        b.reverse()
    else:
        b[int(e)]=0
ch=''
for e in range(10):
    ch+=str(b[e])
print(ch)
