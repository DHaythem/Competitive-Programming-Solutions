#https://codeforces.com/contest/1221/problem/B

n=int(input())
for i in range(n):
    print(''.join(['B' if (i+j)%2 else 'W' for j in range(n)]))
