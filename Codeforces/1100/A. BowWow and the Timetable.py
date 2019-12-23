#https://codeforces.com/contest/1204/problem/A

l=(input())
ch=l[::-1]
s=0
for i in range(len(ch)):
    s+=2**i*int(ch[i])
k=0
while 4**k<s:
    k+=1
print(k)
