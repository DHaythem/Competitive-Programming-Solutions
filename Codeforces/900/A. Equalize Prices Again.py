#https://codeforces.com/contest/1234/problem/A

q=int(input())
for _ in range(q):
    n=int(input())
    l=list(map(int,input().split()))
    if sum(l)%n==0:
        print(sum(l)//n)
    else:
        print((sum(l)//n)+1)
