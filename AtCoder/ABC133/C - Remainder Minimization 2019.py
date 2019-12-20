#https://atcoder.jp/contests/abc133/tasks/abc133_c

l,r=map(int,input().split())
if (l-1)//2019!=r//2019:
    print(0)
else:
    t=[]*(r-l+1)
    for i in range(l,r):
        for j in range(l+1,r+1):
            t.append(i*j%2019)
    print(min(t))
