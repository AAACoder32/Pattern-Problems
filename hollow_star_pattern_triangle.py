
# AAACoder
# Hollow Star Pattern Triangle
n = int(input())
r = 0
while r < n:
    space = n - r
    print(" "*space,end="")
    print("*",end="")
    c = 2*r-1
    if c==-1:
        print()
    elif r==n-1:
        print("*"*(c+1),end="")
    else:
        print(" "*c,end="")
        print("*")
    r += 1
    