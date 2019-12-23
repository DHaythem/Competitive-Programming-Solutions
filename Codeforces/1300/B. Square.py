#https://codeforces.com/problemset/problem/194/B

def pgcd(a,b):
    while b!=0:
        a,b=b,a%b
    return a
    
def ppcm(a,b):
    if (a==0) or (b==0):
        return 0
    else:
        return (a*b)//pgcd(a,b)
        
t=int(input())
l=list(map(int,input().split()))
for n in l:
    print(ppcm(n+1,4*n)//(n+1)+1)
