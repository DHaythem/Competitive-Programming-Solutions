#https://codeforces.com/contest/1236/problem/A

q=int(input())
for _ in range(q):
    l=list(map(int,input().split()))
    s=0
    while 1:
        if l[1]>0 and l[2]>1:
            s+=3
            l[1]-=1
            l[2]-=2
        elif l[0]>0 and l[1]>1:
            s+=3
            l[0]-=1
            l[1]-=2
        else:
            break
    print(s)
