#https://atcoder.jp/contests/abc147/tasks/abc147_b

ch=input()
s=0
n=len(ch)
for i in range(n//2):
    if ch[i]!=ch[n-1-i]:
        s+=1
print(s)
