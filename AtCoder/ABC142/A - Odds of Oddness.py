#https://atcoder.jp/contests/abc142/tasks/abc142_a

n=int(input())
if n==1:
    print(1)
elif n%2==0:
    print(.5)
else:
    print((n//2+1)/n)
