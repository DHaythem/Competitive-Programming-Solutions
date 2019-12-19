#https://atcoder.jp/contests/abc139/tasks/abc139_b

a,b=map(int,input().split())
if b==1:
    print(0)
elif a>=b:
    print(1)
else:
    i=2
    while 1:
        if (a-1)*(i-1)+a>=b:
            break
        else:
            i+=1
    print(i)
