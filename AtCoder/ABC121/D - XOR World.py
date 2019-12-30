#https://atcoder.jp/contests/abc121/tasks/abc121_d

a,b=map(int,input().split())
a=max(0,a-1)
if a%4==0:
    a=a
elif a%4==1:
    a=1
elif a%2==0:
    a=a+1
else:
    a=0
if b%4==0:
    b=b
elif b%4==1:
    b=1
elif b%2==0:
    b=b+1
else:
    b=0
print(a^b)
