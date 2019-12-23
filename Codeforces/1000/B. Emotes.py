#https://codeforces.com/contest/1117/problem/B

n,m,k=map(int,input().split())
l=list(map(int, input().split()))
l.sort()
s=(l[-1]*k+l[-2])*(m//(k+1))+(m%(k+1))*(l[-1])
print(s)
