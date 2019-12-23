#https://codeforces.com/contest/1255/problem/B

q=int(input())
for _ in range(q):
    n,m=map(int,input().split())
    l=list(map(int, input().split()))
    if n==2 or n>m:
        print(-1)
    else:
        q=[]
        for i in range (n):
            q+=[[l[i],i+1]]
        l.sort()
        q.sort()
        c=0
        ch=''
        for i in range(n-1):
            c+=l[i]+l[i+1]
            ch+=str(q[i][1])+' '+str(q[i+1][1])+'\n'
        c+=l[0]+l[n-1]
        ch+=str(q[0][1])+' '+str(q[n-1][1])+'\n'
        if m>n:
            for i in range(m-n-1):
                c+=l[0]+l[1]
                ch+=str(q[0][1])+' '+str(q[1][1])+'\n'
            c+=l[0]+l[1]
            ch+=str(q[0][1])+' '+str(q[1][1])
        print(c)
        print(ch)
