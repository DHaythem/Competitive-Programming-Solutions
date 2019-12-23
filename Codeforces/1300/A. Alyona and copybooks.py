#https://codeforces.com/problemset/problem/740/A

n,a,b,c=map(int,input().split())
k=4-(n%4)
if k==4:
    print(0)
elif k==1:
    s1=a
    s2=b+c
    s3=c*3
    print(min(s1,s2,s3))
elif k==2:
    s1=a*2
    s2=b
    s3=c*2
    print(min(s1,s2,s3))
else:
    s1=c
    s2=a*3
    s3=b+a
    print(min(s1,s2,s3))
