#https://codeforces.com/contest/1157/problem/B

n=int(input())
a=[*input()]
l=list(map(int,input().split()))
i=0
for p in range(n):
    a[p]=int(a[p])
while i<n:
    if a[i]<l[a[i]-1]:
        a[i]=l[a[i]-1]
        j=i+1
        while j<n:
            if a[j]<=l[a[j]-1]:
                a[j]=l[a[j]-1]
                j+=1
            else:
                break
        break
    else:
        i+=1
ch=''
for i in range(n):
    ch+=str(a[i])
print(ch)
