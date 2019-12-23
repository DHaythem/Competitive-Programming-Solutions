#https://codeforces.com/contest/1253/problem/A

t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    f='YES'
    y=a[0]-b[0]
    c=0
    d=0
    if y!=0:
        d=1
    for i in range(0,n):
        x=a[i]-b[i]
        if x>0:
            f='NO'
            break
        else:
            if y!=x:
                c+=1
                if x!=0:
                    d+=1
                y=x
            else:
                y=x
            if c==2 and x!=0:
                f='NO'
            if c==3:
                f='NO'
                break
            if d==2:
                f='NO'
                break
    print(f)
