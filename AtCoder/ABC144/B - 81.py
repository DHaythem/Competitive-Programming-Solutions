#https://atcoder.jp/contests/abc144/tasks/abc144_b

n=int(input())
if n>81:
    print('No')
else:
    l=[]
    for i in range(1,10):
        for j in range(1,10):
            l.append(i*j)
    if n in l:
        print('Yes')
    else:
        print('No')
