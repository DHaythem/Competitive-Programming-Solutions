#https://atcoder.jp/contests/abc122/tasks/abc122_b

ch=input()
l=['A','C','G','T']
mx=0
s=0
for i in range(len(ch)):
    if ch[i] in l:
        s+=1
    else:
        mx=max(mx,s)
        s=0
mx=max(mx,s)
print(mx)
