#https://atcoder.jp/contests/abc131/tasks/abc131_c

def pgcd(m,n): 
    while m%n: 
        r=m%n 
        m=n 
        n=r 
    return n 
    
def ppcm(m,n): 
    return m*n//pgcd(m,n)

a,b,c,d=map(int,input().split())
mx=max(c,d)
mn=min(c,d)
e=ppcm(c,d)
x=b//mx-(a-1)//mx
y=b//mn-(a-1)//mn
z=b//e-(a-1)//e
print(b-a+1-x-y+z)
