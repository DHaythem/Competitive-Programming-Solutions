#https://codeforces.com/contest/791/problem/A

a,b=map(int,input().split())
i=1
while 1:
    if a*3-b*2>0:
        break
    else:
        a*=3
        b*=2
        i+=1
print(i)
