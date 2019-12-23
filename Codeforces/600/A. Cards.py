#https://codeforces.com/contest/1220/problem/A

n=int(input())
l=[*input()]
a=l.count('z')
b=l.count('n')
ch='1'*b + '0'*a
print(*(_ for _ in ch))
