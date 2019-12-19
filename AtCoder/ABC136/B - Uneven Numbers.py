#https://atcoder.jp/contests/abc136/tasks/abc136_b

n=int(input())
s=0
for i in range(1,n+1):
    if len(str(i))%2==1:
        s+=1
print(s)
