#https://atcoder.jp/contests/abc145/tasks/abc145_b

n=int(input())
ch=input()
if n%2==1:
    print('No')
else:
    if ch[:n//2]==ch[n//2:]:
        print('Yes')
    else:
        print('No')
