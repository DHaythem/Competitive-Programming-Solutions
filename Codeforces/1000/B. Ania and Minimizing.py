#https://codeforces.com/contest/1230/problem/B

n,k=map(int,input().split())
s=[*input()]
test=1
if k==0:
    print(''.join(s))
    test=0
elif n==1:
    print(0)
    test=0
if s[0]!='1':
    s[0]='1'
    k-=1
i=1
while k and i<n:
    if s[i]!='0':
        s[i]='0'
        k-=1
    i+=1
if test:
    print(''.join(s))
