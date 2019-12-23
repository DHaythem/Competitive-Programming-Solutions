#https://codeforces.com/problemset/problem/1154/A

l=list(map(int,input().split()))
l.sort()
print(l[3]-l[0],' ',l[3]-l[1],' ',l[3]-l[2])
