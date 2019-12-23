#https://codeforces.com/contest/1216/problem/B

n=int(input())
l=list(map(int, input().split()))
c=l.copy()
c.sort()
c.reverse()
s=0
for i in range(len(c)):
    s+=c[i]*i+1
print(s)
t=[]
for i in c:
    t.append(l.index(i)+1)
    l[l.index(i)]=-1
print(*(i for i in t))
