#https://codeforces.com/problemset/problem/171/B

n=int(input())
if n==1:
    print(1)
else:
    s=0
    for i in range(n):
        s+=12*i
    s+=1
    print(s)
