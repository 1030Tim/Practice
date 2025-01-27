n  = int(input())
count = 0
g = 1
for i in range(n):
    a,b = map(int,input().split())
    if ((a+count)>=b):
        count += b
    else:
        g = -1

if (g>0):
    print("possible")
else:
    print("impossible")