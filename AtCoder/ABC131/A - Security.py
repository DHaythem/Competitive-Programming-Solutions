#https://atcoder.jp/contests/abc131/tasks/abc131_a

s=input()
r='Good'
for i in range(3):
    if s[i]==s[i+1]:
        r='Bad'
        break
print(r)
