def clear(a):
    a=str(a)
    x=""
    for i in a:
        if a and i=="7" or i=="4":
            pass
        else:
            x+=str(i)
    return x
a=int(input())
a=str(a)
if a=="4" or a=="7":
    print("NO")
elif len(clear(a))==0:
    print("YES")

else:
    print("NO")
