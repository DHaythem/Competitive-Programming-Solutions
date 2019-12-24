#https://atcoder.jp/contests/abc126/tasks/abc126_c

n,k=map(int,input().split())
sm=0
s=1/n
for i in range(1,n+1):
    x=i
    j=0
    while x<k:
        x*=2
        j+=1
    sm+=s*.5**j
print(sm)
