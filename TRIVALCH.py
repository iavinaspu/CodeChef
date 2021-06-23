l = list(map(int,input().split()))
a,b,c = sorted(l)

s = a+b+c//2
area = (s*(s-a)*(s-b)*(s-c))**2

if a+b>c and b+c>a and c+a>b:
    if area>0:
        print("YES")
    else:
        print("NO")
else:
    print("NO")