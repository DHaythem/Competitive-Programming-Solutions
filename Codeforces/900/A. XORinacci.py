#https://codeforces.com/contest/1208/problem/A

t=int(input())
for i in range(t):
    a,b,n=map(int,input().split())
    l=[a,b,a^b]
    print(l[n%3])
