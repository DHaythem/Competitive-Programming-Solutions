#https://codeforces.com/problemset/problem/1295/A

t=int(input())
l=[6,2,5,5,4,5,6,3,7,6]
for _ in range(t):
    n=int(input())
    a=n//2
    b=n%2
    if b==0:
        print('1'*a)
    else:
        print('7'+'1'*(a-1))
