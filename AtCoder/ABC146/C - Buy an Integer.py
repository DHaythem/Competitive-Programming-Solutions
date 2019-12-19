#https://atcoder.jp/contests/abc146/tasks/abc146_c

a,b,x=map(int,input().split())
mx=0
for i in range(1,19):
    n=(x-(b*i))//a
    if len(str(n)) > i:
        continue
    mx=max(mx,n)
mx=min(mx,10**9)
print(mx)
