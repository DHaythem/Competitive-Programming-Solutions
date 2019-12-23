#https://codeforces.com/contest/1263/problem/A

t=int(input())
for _ in range(t):
    l=list(map(int,input().split()))
    l.sort()
    if l[0]+l[1]<l[-1]:
        print(l[0]+l[1])
    else:
        print(sum(l)//2)
