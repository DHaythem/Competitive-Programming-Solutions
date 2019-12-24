#https://atcoder.jp/contests/abc148/tasks/abc148_c

def pgcd(m,n): 
    while m%n: 
        r=m%n 
        m=n 
        n=r 
    return n 
 
def ppcm(m,n): 
    return m*n//pgcd(m,n)

a,b=map(int,input().split())
print(ppcm(a,b))
