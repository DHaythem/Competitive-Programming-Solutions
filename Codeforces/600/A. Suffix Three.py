#https://codeforces.com/contest/1281/problem/A

n=int(input())
for _ in range(n):
    ch=input()
    a=len(ch)
    if ch[a-2:]=='po':
        print('FILIPINO')
    elif ch[a-4:]=='desu' or ch[a-4:]=='masu':
        print('JAPANESE')
    else:
        print('KOREAN')
