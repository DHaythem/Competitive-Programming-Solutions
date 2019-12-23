#https://codeforces.com/contest/940/problem/B

n=int(input())
k=int(input())
a=int(input())
b=int(input())
s=0
while n!=1:
    if k==1:
        s=(n-1)*a
        break
    if n>=k:
        if n%k==0:
            if b<a*(n-(n//k)):
                n=n//k
                s+=b
            else:
                s+=a*(n-(n//k))
                n=n//k
        else:
            d=n%k
            s+=d*a
            n-=d
    else:
        s+=(n-1)*a
        n=1
print(s)
