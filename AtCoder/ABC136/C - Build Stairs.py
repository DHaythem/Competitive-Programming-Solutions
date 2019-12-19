#https://atcoder.jp/contests/abc136/tasks/abc136_c

n=int(input())
h=list(map(int,input().split()))
h.reverse()
t=1
i=0
while i<n-1:
    if h[i]<h[i+1]:
        h[i+1]-=1
        if h[i]<h[i+1]:
            t=0
            print('No')
            break
        else:
            i+=1
    else:
        i+=1
if t:
    print('Yes')
