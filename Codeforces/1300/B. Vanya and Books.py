#https://codeforces.com/problemset/problem/552/B

n=int(input())
if n<10:
    print(n)
elif n<100:
    print(9+(n-9)*2)
elif n<1000:
    print(9+90*2+(n-99)*3)
elif n<10000:
    print(9+90*2+900*3+(n-999)*4)
elif n<100000:
    print(9+90*2+900*3+9000*4+(n-9999)*5)
elif n<1000000:
    print(9+90*2+900*3+9000*4+90000*5+(n-99999)*6)
elif n<10000000:
    print(9+90*2+900*3+9000*4+90000*5+900000*6+(n-999999)*7)
elif n<100000000:
    print(9+90*2+900*3+9000*4+90000*5+900000*6+9000000*7+(n-9999999)*8)
elif n<1000000000:
    print(9+90*2+900*3+9000*4+90000*5+900000*6+9000000*7+90000000*8+(n-99999999)*9)
else:
    print(9+90*2+900*3+9000*4+90000*5+900000*6+9000000*7+90000000*8+900000000*9+10)
