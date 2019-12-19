#https://atcoder.jp/contests/abc144/tasks/abc144_c

n=int(input())
mx=10**15
for i in range(1,int(n**.5+1)):
    if n%i==0 and n//i+i-2<mx:
        mx=n//i+i-2
print(mx)
