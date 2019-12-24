#https://atcoder.jp/contests/abc126/tasks/abc126_b

s=input()
a=int(s[:2])
b=int(s[2:])
if a<13 and a>0 and b<13 and b>0:
    print('AMBIGUOUS')
elif a<13 and a>0:
    print('MMYY')
elif b<13 and b>0:
    print('YYMM')
else:
    print('NA')
