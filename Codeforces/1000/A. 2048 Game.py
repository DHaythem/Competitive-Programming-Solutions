#https://codeforces.com/contest/1221/problem/A

q=int(input())
l=[]
for _ in range(q):
    n=int(input())
    l=filter(lambda x : x <= 2048,map(int,input().split()))
    if sum(l)>=2048:
        print('YES')
    else:
        print('NO')
