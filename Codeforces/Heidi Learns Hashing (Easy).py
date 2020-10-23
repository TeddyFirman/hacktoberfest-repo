x,y=0,0
a=int(input())
while True:
    if (x**2)+2*x*y+x+1 == a:
        print(x,y)
        break
    else:
        x+=1
        y+=1
