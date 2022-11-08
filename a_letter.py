
# AAACoder A Letter Star Pattern
n = 9
r = 0
print("\n"*2)
while r<n:
    space = n-r
    print(" "*space,end="")
    print("*",end="")
    c = 2*r-1
    if c==-1:
        print()
    elif r == n-4:
        print("*"*(c+1))
    else:
        print(" "*c,end="")
        print("*")
    r += 1
    