#https://codeforces.com/problemset/problem/954/A

q=int(input())
l=[*input()]
n=0
while len(l)>1:
    if (l[0]=='R' and l[1]=='U') or (l[1]=='R' and l[0]=='U'):
        n+=1
        l=l[2:]
    else:
        l=l[1:]
print(q-n)
