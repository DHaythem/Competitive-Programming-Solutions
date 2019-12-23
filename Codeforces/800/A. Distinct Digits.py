#https://codeforces.com/contest/1228/problem/A

l,r=map(int,input().split())
a=-1
for i in range(l,r+1):
    s=str(i)
    if len(s)==len(set(s)):
        a=i
        break
print(a)
