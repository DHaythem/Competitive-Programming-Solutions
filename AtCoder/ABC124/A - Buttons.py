#https://atcoder.jp/contests/abc124/tasks/abc124_a

a,b=map(int,input().split())
if a<b:
    s=b
    b-=1
else:
    s=a
    a-=1
if a<b:
    s+=b
    b-=1
else:
    s+=a
    a-=1
print(s)
