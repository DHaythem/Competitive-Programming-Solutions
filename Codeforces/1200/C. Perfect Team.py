#https://codeforces.com/contest/1221/problem/C

for i in range(int(input())):
	n,m,q=map(int,input().split())
	print(min(n,m,(n+m+q)//3))
