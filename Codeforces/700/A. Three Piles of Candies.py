#https://codeforces.com/contest/1196/problem/A

q=int(input())
for i in range(q):
    a,b,c=map(int, input().split())
    print((a+b+c) // 2)
