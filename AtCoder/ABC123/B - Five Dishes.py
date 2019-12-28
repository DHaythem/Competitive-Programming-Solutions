#https://atcoder.jp/contests/abc123/submissions/me

l=[]
l.append(int(input()))
l.append(int(input()))
l.append(int(input()))
l.append(int(input()))
l.append(int(input()))
t=[]
for e in l:
    t.append(e%10)
s=0
i=0
while 0 in t:
    j=t.index(0)
    t[j]=-1
    s+=l[j]
    i+=1
while i<4:
    j=t.index(max(t))
    t[j]=-1
    s+=l[j]-l[j]%10+10
    i+=1
if i==4:
    j=t.index(max(t))
    s+=l[j]
print(s)
