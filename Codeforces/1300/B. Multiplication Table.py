#https://codeforces.com/problemset/problem/1220/B

n=int(input())
l=[]
r=[]
for _ in range(n):
    l.append(list(map(int, input().split())))
r.append((l[0][1]*l[0][2]/l[1][2])**.5)
for i  in range(n-1):
    r.append(l[0][i+1]/r[0])
print(*(int(_) for _ in r))
