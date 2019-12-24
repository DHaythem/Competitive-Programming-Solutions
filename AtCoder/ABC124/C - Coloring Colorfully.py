#https://atcoder.jp/contests/abc124/tasks/abc124_c

a=list(input())
b=a[::-1]
n=len(a)
if n==1:
    print(0)
else:
    x=0
    y=0
    for i in range(n-1):
        if a[i]==a[i+1]:
            x+=1
            if a[i]=='0':
                a[i+1]='1'
            else:
                a[i+1]='0'
        if b[i]==b[i+1]:
            y+=1
            if b[i]=='0':
                b[i+1]='1'
            else:
                b[i+1]='0'
    print(min(x,y))
