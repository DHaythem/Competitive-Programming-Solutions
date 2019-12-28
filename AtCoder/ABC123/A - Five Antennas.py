#https://atcoder.jp/contests/abc123/tasks/abc123_a

l=[]
t=1
l.append(int(input()))
l.append(int(input()))
l.append(int(input()))
l.append(int(input()))
l.append(int(input()))
k=int(input())
for i in range(4):
    for j in range(i+1,5):
        if abs(l[i]-l[j])>k:
            t=0
            print(':(')
            break
    break
if t:
    print('Yay!')
