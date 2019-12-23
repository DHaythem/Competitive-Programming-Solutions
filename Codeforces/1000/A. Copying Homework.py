#https://codeforces.com/contest/1252/problem/A

n=int(input())
l=list(map(int,input().split()))
t=l[1:]+[l[0]]
print(*(_ for _ in t))
