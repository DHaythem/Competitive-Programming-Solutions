#https://atcoder.jp/contests/abc134/tasks/abc134_c

n=int(input())
l=[]
mx=-1
s=1
for _ in range(n):
    x=int(input())
    l.append(x)
    if x==mx:
        s+=1
    elif x>mx:
        mx=x
        s=1
if s>1:
    for _ in range(n):
        print(mx)
else:
    j=l.index(mx)
    for i in range(n):
        if i!=j:
            print(mx)
        else:
            l.remove(mx)
            print(max(l))
