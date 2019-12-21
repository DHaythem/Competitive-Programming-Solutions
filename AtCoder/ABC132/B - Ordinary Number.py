#https://atcoder.jp/contests/abc132/tasks/abc132_b

n=int(input())
l=list(map(int,input().split()))
s=0
for i in range(1,n-1):
    if (l[i]>l[i-1] and l[i]<l[i+1]) or (l[i]<l[i-1] and l[i]>l[i+1]):
        s+=1
print(s)
