#https://atcoder.jp/contests/abc146/tasks/abc146_b

n=int(input())
s=input()
if n==0:
    print(s)
else:
    m=len(s)
    ch=''
    for i in range(m):
        a=ord(s[i])+n
        if a>90:
            b=65+a-91
            b=chr(b)
            ch+=b
        else:
            ch+=chr(a)
    print(ch)
