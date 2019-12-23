#https://codeforces.com/contest/535/problem/A

n=int(input())
l=['zero','one','two','three','four','five','six','seven','eight','nine','ten','eleven','twelve','thirteen','fourteen','fifteen','sixteen','seventeen','eighteen','nineteen']
x=['zero','one','two','three','four','five','six','seven','eight','nine']
y=[0,0,'twenty','thirty','forty','fifty','sixty','seventy','eighty','ninety']
if n<20:
   print(l[n])
else:
    a=n//10
    b=n%10
    if b==0:
        print(y[a])
    else:
        
        print(str(y[a])+'-'+str(x[b]))
