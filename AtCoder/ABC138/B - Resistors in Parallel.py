#https://atcoder.jp/contests/abc138/tasks/abc138_b

n=int(input())
l=list(map(int,input().split()))
s=0
for e in l:
    s+=1/e
print(1/s)
