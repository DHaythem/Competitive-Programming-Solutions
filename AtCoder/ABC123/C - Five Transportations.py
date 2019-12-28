#https://atcoder.jp/contests/abc123/tasks/abc123_c

n=int(input())
l=[int(input()) for i in range(5)]
print(-(-n//min(l))+4)
