#https://atcoder.jp/contests/abc141/tasks/abc141_b

s=input()
t=1
for i in range(len(s)):
    if ((i+1)%2==0 and s[i] in ['U','D','L']) or ((i+1)%2==1 and s[i] in ['U','D','R']):
        continue
    else:
        print('No')
        t=0
        break
if t:
    print('Yes')
