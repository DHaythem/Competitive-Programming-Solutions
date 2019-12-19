#https://atcoder.jp/contests/abc143/tasks/abc143_c

n=int(input())
ch=input()
a=ch[0]
x=n
for i in range(1,n):
    if a==ch[i]:
        x-=1
    a=ch[i]
print(x)
